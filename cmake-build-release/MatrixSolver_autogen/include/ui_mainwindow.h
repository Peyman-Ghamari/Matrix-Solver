/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *pmLabel;
    QTextEdit *matrixInput;
    QLabel *titleLabel;
    QHBoxLayout *methodButtonsLayout;
    QPushButton *btnGaussJordan;
    QPushButton *btnDeterminant;
    QPushButton *btnInverse;
    QTextBrowser *resultDisplay;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(720, 540);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        pmLabel = new QLabel(centralwidget);
        pmLabel->setObjectName("pmLabel");
        pmLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(pmLabel);

        matrixInput = new QTextEdit(centralwidget);
        matrixInput->setObjectName("matrixInput");

        verticalLayout->addWidget(matrixInput);

        titleLabel = new QLabel(centralwidget);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(titleLabel);

        methodButtonsLayout = new QHBoxLayout();
        methodButtonsLayout->setObjectName("methodButtonsLayout");
        btnGaussJordan = new QPushButton(centralwidget);
        btnGaussJordan->setObjectName("btnGaussJordan");
        btnGaussJordan->setCheckable(true);
        btnGaussJordan->setStyleSheet(QString::fromUtf8("\n"
"                                        QPushButton {\n"
"                                        background-color: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #7a4e9f, stop:1 #a8d5ba);\n"
"                                        color: white;\n"
"                                        font-size: 16px;\n"
"                                        font-weight: bold;\n"
"                                        border-radius: 10px;\n"
"                                        padding: 10px 20px;\n"
"                                        border: none;\n"
"                                        }\n"
"                                        QPushButton:hover {\n"
"                                        background-color: #8c62b5;\n"
"                                        }\n"
"                                    "));

        methodButtonsLayout->addWidget(btnGaussJordan);

        btnDeterminant = new QPushButton(centralwidget);
        btnDeterminant->setObjectName("btnDeterminant");
        btnDeterminant->setCheckable(true);
        btnDeterminant->setStyleSheet(QString::fromUtf8("\n"
"                                        QPushButton {\n"
"                                        background-color: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #7a4e9f, stop:1 #a8d5ba);\n"
"                                        color: white;\n"
"                                        font-size: 16px;\n"
"                                        font-weight: bold;\n"
"                                        border-radius: 10px;\n"
"                                        padding: 10px 20px;\n"
"                                        border: none;\n"
"                                        }\n"
"                                        QPushButton:hover {\n"
"                                        background-color: #8c62b5;\n"
"                                        }\n"
"                                    "));

        methodButtonsLayout->addWidget(btnDeterminant);

        btnInverse = new QPushButton(centralwidget);
        btnInverse->setObjectName("btnInverse");
        btnInverse->setCheckable(true);
        btnInverse->setStyleSheet(QString::fromUtf8("\n"
"                                        QPushButton {\n"
"                                        background-color: qlineargradient(x1:0, y1:0, x2:1, y2:0, stop:0 #7a4e9f, stop:1 #a8d5ba);\n"
"                                        color: white;\n"
"                                        font-size: 16px;\n"
"                                        font-weight: bold;\n"
"                                        border-radius: 10px;\n"
"                                        padding: 10px 20px;\n"
"                                        border: none;\n"
"                                        }\n"
"                                        QPushButton:hover {\n"
"                                        background-color: #8c62b5;\n"
"                                        }\n"
"                                    "));

        methodButtonsLayout->addWidget(btnInverse);


        verticalLayout->addLayout(methodButtonsLayout);

        resultDisplay = new QTextBrowser(centralwidget);
        resultDisplay->setObjectName("resultDisplay");

        verticalLayout->addWidget(resultDisplay);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Matrix Solver", nullptr));
        pmLabel->setText(QCoreApplication::translate("MainWindow", "PM", nullptr));
        pmLabel->setStyleSheet(QCoreApplication::translate("MainWindow", "\n"
"                                color: #7B1FA2;\n"
"                                font-size: 36px;\n"
"                                font-weight: 700;\n"
"                                letter-spacing: 2px;\n"
"                            ", nullptr));
        matrixInput->setPlaceholderText(QCoreApplication::translate("MainWindow", "Enter The Augmented Matrix (For Gauss-Jordan : a b c | d , For Inverse OR Determinant : |a b c|)", nullptr));
        matrixInput->setStyleSheet(QCoreApplication::translate("MainWindow", "\n"
"                                background-color: #fafafa;\n"
"                                border: 2px solid #7a4e9f;\n"
"                                border-radius: 6px;\n"
"                                font-size: 16px;\n"
"                                padding: 8px;\n"
"                                color: #333;\n"
"                            ", nullptr));
        titleLabel->setText(QCoreApplication::translate("MainWindow", "Select A Method To Compute The Matrix", nullptr));
        titleLabel->setStyleSheet(QCoreApplication::translate("MainWindow", "\n"
"                                background-color: #a8d5ba;\n"
"                                font-size: 20px;\n"
"                                color: #2d2d2d;\n"
"                                padding: 8px;\n"
"                                border-radius: 6px;\n"
"                                font-weight: 600;\n"
"                            ", nullptr));
        btnGaussJordan->setText(QCoreApplication::translate("MainWindow", "Gauss-Jordan", nullptr));
        btnDeterminant->setText(QCoreApplication::translate("MainWindow", "Determinant", nullptr));
        btnInverse->setText(QCoreApplication::translate("MainWindow", "Inverse", nullptr));
        resultDisplay->setPlaceholderText(QCoreApplication::translate("MainWindow", "Results will be shown here...", nullptr));
        resultDisplay->setStyleSheet(QCoreApplication::translate("MainWindow", "\n"
"                                background-color: #ffffff;\n"
"                                border: 2px solid #7a4e9f;\n"
"                                font-size: 16px;\n"
"                                color: #2f2f2f;\n"
"                                padding: 10px;\n"
"                                border-radius: 6px;\n"
"                            ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
