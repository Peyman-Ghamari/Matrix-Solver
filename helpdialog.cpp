#include "helpdialog.h"
#include "ui_helpdialog.h"
#include <QPixmap>
#include <QDebug>

HelpDialog::HelpDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::HelpDialog)
{
    ui->setupUi(this);

    ui->stackedWidget->setCurrentIndex(0);  // شروع از صفحه اول // Start from the first page


    // Center the content inside the labels
    // مرکز کردن محتوا داخل لیبل‌ها
    ui->label_pic1->setAlignment(Qt::AlignCenter);
    ui->label_pic2->setAlignment(Qt::AlignCenter);
    ui->label_pic3->setAlignment(Qt::AlignCenter);

    // Zoom factor
    // ضریب بزرگ‌نمایی
    const double scaleFactor = 2.2;  // یعنی 220٪ بزرگ‌تر // That means 220% larger

    // Calculate a common size for all images
    // محاسبه سایز مشترک برای همه عکس‌ها
    int minWidth = std::min({ ui->label_pic1->width(), ui->label_pic2->width(), ui->label_pic3->width() });
    int minHeight = std::min({ ui->label_pic1->height(), ui->label_pic2->height(), ui->label_pic3->height() });

    int scaledWidth = static_cast<int>(minWidth * scaleFactor);
    int scaledHeight = static_cast<int>(minHeight * scaleFactor);

    QPixmap img1("images/gau.png");
    QPixmap img2("images/det.png");
    QPixmap img3("images/inv.png");

    if (!img1.isNull()) {
        ui->label_pic1->setPixmap(img1.scaled(
            scaledWidth,
            scaledHeight,
            Qt::KeepAspectRatio,
            Qt::SmoothTransformation
        ));
    }

    if (!img2.isNull()) {
        ui->label_pic2->setPixmap(img2.scaled(
            scaledWidth,
            scaledHeight,
            Qt::KeepAspectRatio,
            Qt::SmoothTransformation
        ));
    }

    if (!img3.isNull()) {
        ui->label_pic3->setPixmap(img3.scaled(
            scaledWidth,
            scaledHeight,
            Qt::KeepAspectRatio,
            Qt::SmoothTransformation
        ));
    }


}

HelpDialog::~HelpDialog()
{
    delete ui;
}

void HelpDialog::on_nextButton_clicked()
{
    int nextIndex = (ui->stackedWidget->currentIndex() + 1) % ui->stackedWidget->count();
    ui->stackedWidget->setCurrentIndex(nextIndex);
}

void HelpDialog::on_backButton_clicked()
{
    int index = ui->stackedWidget->currentIndex() - 1;
    if (index < 0)
        index = ui->stackedWidget->count() - 1;
    ui->stackedWidget->setCurrentIndex(index);
}

void HelpDialog::on_closeButton_clicked()
{
    close();
}
