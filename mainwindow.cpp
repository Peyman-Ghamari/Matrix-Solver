#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QStringList>
#include <QTextBrowser>
#include <QTextEdit>
#include <QPushButton>
#include <QMessageBox>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <QRegularExpression>
#include <QGraphicsOpacityEffect>
#include <QPropertyAnimation>
#include <QTimer>
#include "developerinfo.h"


const int MAX = 20;
const double EPS = 1e-9;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {

    ui->setupUi(this);
    HelpDialog help(this);

    help.exec();

    ui->pmLabel->setCursor(Qt::PointingHandCursor);
    ui->pmLabel->installEventFilter(this);
    //// Blinking effect for pmLabel
    // افکت چشمک‌زن برای pmLabel
    auto *pmEffect = new QGraphicsOpacityEffect(ui->pmLabel);
    ui->pmLabel->setGraphicsEffect(pmEffect);
    auto *pmAnim = new QPropertyAnimation(pmEffect, "opacity");
    pmAnim->setDuration(1000);
    pmAnim->setStartValue(1.0);
    pmAnim->setEndValue(0.3);
    pmAnim->setEasingCurve(QEasingCurve::InOutQuad);
    pmAnim->setLoopCount(-1);
    pmAnim->start(QAbstractAnimation::DeleteWhenStopped);

    // We make the buttons more colorful and visually appealing
    // دکمه‌ها را رنگی و زیباتر می‌کنیم
    QString buttonStyle = R"(
QPushButton {
    background-color: qlineargradient(x1:0, y1:0, x2:1, y2:0,
                                      stop:0 #6a0dad, stop:1 #c792ea);
    color: white;
    font-size: 18px;
    border-radius: 10px;
    padding: 10px;
    font-weight: bold;
    border: none;
}
QPushButton:hover {
    background-color: #a46de0;
}
)";


    ui->btnInverse->setStyleSheet(buttonStyle);
    ui->btnDeterminant->setStyleSheet(buttonStyle);
    ui->btnGaussJordan->setStyleSheet(buttonStyle);

    connect(ui->btnGaussJordan, &QPushButton::clicked, this, &MainWindow::onGaussJordanClicked);
    connect(ui->btnInverse, &QPushButton::clicked, this, &MainWindow::onInverseClicked);
    connect(ui->btnDeterminant, &QPushButton::clicked, this, &MainWindow::onDeterminantClicked);
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::onGaussJordanClicked() {
    QString inputText = ui->matrixInput->toPlainText();
    QStringList lines = inputText.split('\n', Qt::SkipEmptyParts);

    double a[MAX][MAX + 1];
    int m = lines.size();
    int n = -1;

    for (int i = 0; i < m; ++i) {
        QString cleanedLine = lines[i];
        cleanedLine.replace("|", " ");
        QStringList values = cleanedLine.split(QRegularExpression("\\s+"), Qt::SkipEmptyParts);

        if (n == -1)
            n = values.size() - 1;
        else if (values.size() - 1 != n) {
            QMessageBox::warning(this, "Input Error", "All Equations Must Have The Same Number Of Variables.");
            return;
        }

        if (values.size() > MAX + 1) {
            QMessageBox::warning(this, "Input Error", "Too Many Values In One Line.");
            return;
        }

        for (int j = 0; j < values.size(); ++j)
            a[i][j] = values[j].toDouble();
    }

    std::ostringstream result;
    int rank = 0;

    for (int col = 0, row = 0; col < n && row < m; ++col) {
        int sel = row;
        for (int i = row + 1; i < m; ++i)
            if (fabs(a[i][col]) > fabs(a[sel][col]))
                sel = i;

        if (fabs(a[sel][col]) < EPS)
            continue;

        for (int i = col; i <= n; ++i)
            std::swap(a[sel][i], a[row][i]);

        double pivot = a[row][col];
        for (int i = col; i <= n; ++i)
            a[row][i] /= pivot;

        for (int i = 0; i < m; ++i) {
            if (i != row && fabs(a[i][col]) > EPS) {
                double factor = a[i][col];
                for (int j = col; j <= n; ++j)
                    a[i][j] -= factor * a[row][j];
            }
        }
        ++row;
        ++rank;
    }
    //Checking For Inconsistency (Rows Where 0 Equals A Nonzero Number)
    // بررسی ناسازگار بودن (سطرهایی که 0 = عدد نامساوی هستند)
    for (int i = 0; i < m; ++i) {
        bool allZero = true;
        for (int j = 0; j < n; ++j)
            if (fabs(a[i][j]) > EPS)
                allZero = false;
        if (allZero && fabs(a[i][n]) > EPS) {
            result << "The System Has No Solution (Inconsistent)." << std::endl;
            ui->resultDisplay->setText(QString::fromStdString(result.str()));
            return;
        }
    }
    //Checking For Infinitely Many Solutions
    // بررسی بی‌نهایت جواب
    if (rank < n) {
        result << "The System Has Infinitely Many Solutions (Underdetermined)." << std::endl;
        ui->resultDisplay->setText(QString::fromStdString(result.str()));
        return;
    }
    //Unique solution
    // جواب یکتا
    result << "Solution :\n";
    for (int i = 0; i < n; ++i) {
        result << std::fixed << std::setprecision(6);
        result << "x" << i + 1 << " = " << a[i][n] << std::endl;
    }

    ui->resultDisplay->setText(QString::fromStdString(result.str()));
}


void MainWindow::onInverseClicked() {
    QString inputText = ui->matrixInput->toPlainText();
    QStringList lines = inputText.split('\n', Qt::SkipEmptyParts);

    int n = lines.size();
    double a[MAX][2 * MAX];

    for (int i = 0; i < n; ++i) {
        QString cleanedLine = lines[i];
        cleanedLine.replace("|", " ");

        QStringList values = cleanedLine.split(QRegularExpression("\\s+"), Qt::SkipEmptyParts);
        if (values.size() != n) {
            QMessageBox::warning(this, "Input Error", "Matrix Must Be Square (n x n) To Compute Its Inverse.");
            return;
        }

        for (int j = 0; j < n; ++j) {
            a[i][j] = values[j].toDouble();
            a[i][j + n] = (i == j) ? 1.0 : 0.0;
        }
    }

    for (int i = 0; i < n; ++i) {
        int pivot = i;
        for (int j = i + 1; j < n; ++j)
            if (fabs(a[j][i]) > fabs(a[pivot][i]))
                pivot = j;

        if (fabs(a[pivot][i]) < EPS) {
            ui->resultDisplay->setText("Matrix Is Singular And Cannot Be Inverted.");
            return;
        }

        for (int j = 0; j < 2 * n; ++j)
            std::swap(a[i][j], a[pivot][j]);

        double div = a[i][i];
        for (int j = 0; j < 2 * n; ++j)
            a[i][j] /= div;

        for (int j = 0; j < n; ++j) {
            if (j != i) {
                double factor = a[j][i];
                for (int k = 0; k < 2 * n; ++k)
                    a[j][k] -= factor * a[i][k];
            }
        }
    }

    QString html = "<b>Inverse Matrix :</b><br><table border='1' cellspacing='0' cellpadding='5' style='border-collapse: collapse; text-align: center;'>";

    for (int i = 0; i < n; ++i) {
        html += "<tr>";
        for (int j = 0; j < n; ++j) {
            html += "<td>" + QString::number(a[i][j + n], 'f', 6) + "</td>";
        }
        html += "</tr>";
    }

    html += "</table>";
    ui->resultDisplay->setText(html);
}


void MainWindow::onDeterminantClicked() {
    QString inputText = ui->matrixInput->toPlainText();
    QStringList lines = inputText.split('\n', Qt::SkipEmptyParts);

    int n = lines.size();
    double a[MAX][MAX];

    for (int i = 0; i < n; ++i) {
        QString cleanedLine = lines[i];
        cleanedLine.replace("|", " ");  // Remove potential separator// حذف جداکننده احتمالی

        QStringList values = cleanedLine.split(QRegularExpression("\\s+"), Qt::SkipEmptyParts);
        if (values.size() != n) {
            QMessageBox::warning(this, "خطای ورودی", "برای محاسبه دترمینان، ماتریس باید مربعی باشد.");
            return;
        }

        for (int j = 0; j < n; ++j)
            a[i][j] = values[j].toDouble();
    }

    // Determinant calculation algorithm using elementary row elimination method
    // الگوریتم محاسبه دترمینان با روش حذف سطری مقدماتی
    double det = 1.0;
    for (int i = 0; i < n; ++i) {
        int pivot = i;
        for (int j = i + 1; j < n; ++j)
            if (fabs(a[j][i]) > fabs(a[pivot][i]))
                pivot = j;

        if (fabs(a[pivot][i]) < EPS) {
            det = 0.0;
            break;
        }

        if (i != pivot) {
            for (int j = 0; j < n; ++j)
                std::swap(a[i][j], a[pivot][j]);
            det *= -1.0;
        }

        det *= a[i][i];

        for (int j = i + 1; j < n; ++j) {
            double factor = a[j][i] / a[i][i];
            for (int k = i; k < n; ++k)
                a[j][k] -= factor * a[i][k];
        }
    }

    std::ostringstream result;
    result << "The Determinant Of The Matrix Is : " << std::fixed << std::setprecision(6) << det;
    ui->resultDisplay->setText(QString::fromStdString(result.str()));
}


void MainWindow::showDeveloperInfo() {
    DeveloperInfo *info = new DeveloperInfo(this);
    info->exec();
}

bool MainWindow::eventFilter(QObject *obj, QEvent *event) {
    if (obj == ui->pmLabel && event->type() == QEvent::MouseButtonPress) {
        showDeveloperInfo();
        return true;
    }
    return QMainWindow::eventFilter(obj, event);
}
