/********************************************************************************
** Form generated from reading UI file 'helpdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPDIALOG_H
#define UI_HELPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpDialog
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label1;
    QLabel *label_pic1;
    QLabel *guideDescriptionLabel1;
    QWidget *page2;
    QVBoxLayout *verticalLayout_3;
    QLabel *label2;
    QLabel *label_pic2;
    QLabel *guideDescriptionLabel2;
    QWidget *page3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label3;
    QLabel *label_pic3;
    QLabel *guideDescriptionLabel3;
    QHBoxLayout *buttonLayout;
    QPushButton *backButton;
    QPushButton *nextButton;
    QPushButton *closeButton;

    void setupUi(QDialog *HelpDialog)
    {
        if (HelpDialog->objectName().isEmpty())
            HelpDialog->setObjectName("HelpDialog");
        HelpDialog->resize(500, 350);
        HelpDialog->setStyleSheet(QString::fromUtf8("\n"
"                QDialog {\n"
"                background-color: #f3e6ff;\n"
"                }\n"
"                QLabel {\n"
"                color: #4b0082;\n"
"                font-size: 16px;\n"
"                }\n"
"                QPushButton {\n"
"                background-color: #b366ff;\n"
"                color: white;\n"
"                border-radius: 8px;\n"
"                padding: 5px 15px;\n"
"                }\n"
"                QPushButton:hover {\n"
"                background-color: #9933ff;\n"
"                }\n"
"                QStackedWidget {\n"
"                background-color: #ffffff;\n"
"                border: 1px solid #ccc;\n"
"                border-radius: 10px;\n"
"                padding: 10px;\n"
"                }\n"
"            "));
        verticalLayout = new QVBoxLayout(HelpDialog);
        verticalLayout->setObjectName("verticalLayout");
        stackedWidget = new QStackedWidget(HelpDialog);
        stackedWidget->setObjectName("stackedWidget");
        page1 = new QWidget();
        page1->setObjectName("page1");
        verticalLayout_2 = new QVBoxLayout(page1);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label1 = new QLabel(page1);
        label1->setObjectName("label1");
        label1->setAlignment(Qt::AlignCenter);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        label1->setFont(font);

        verticalLayout_2->addWidget(label1);

        label_pic1 = new QLabel(page1);
        label_pic1->setObjectName("label_pic1");
        label_pic1->setMinimumSize(QSize(180, 180));

        verticalLayout_2->addWidget(label_pic1);

        guideDescriptionLabel1 = new QLabel(page1);
        guideDescriptionLabel1->setObjectName("guideDescriptionLabel1");
        guideDescriptionLabel1->setWordWrap(true);
        guideDescriptionLabel1->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(guideDescriptionLabel1);

        stackedWidget->addWidget(page1);
        page2 = new QWidget();
        page2->setObjectName("page2");
        verticalLayout_3 = new QVBoxLayout(page2);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label2 = new QLabel(page2);
        label2->setObjectName("label2");
        label2->setAlignment(Qt::AlignCenter);
        label2->setFont(font);

        verticalLayout_3->addWidget(label2);

        label_pic2 = new QLabel(page2);
        label_pic2->setObjectName("label_pic2");
        label_pic2->setMinimumSize(QSize(180, 180));

        verticalLayout_3->addWidget(label_pic2);

        guideDescriptionLabel2 = new QLabel(page2);
        guideDescriptionLabel2->setObjectName("guideDescriptionLabel2");
        guideDescriptionLabel2->setWordWrap(true);
        guideDescriptionLabel2->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(guideDescriptionLabel2);

        stackedWidget->addWidget(page2);
        page3 = new QWidget();
        page3->setObjectName("page3");
        verticalLayout_4 = new QVBoxLayout(page3);
        verticalLayout_4->setObjectName("verticalLayout_4");
        label3 = new QLabel(page3);
        label3->setObjectName("label3");
        label3->setAlignment(Qt::AlignCenter);
        label3->setFont(font);

        verticalLayout_4->addWidget(label3);

        label_pic3 = new QLabel(page3);
        label_pic3->setObjectName("label_pic3");
        label_pic3->setMinimumSize(QSize(180, 180));

        verticalLayout_4->addWidget(label_pic3);

        guideDescriptionLabel3 = new QLabel(page3);
        guideDescriptionLabel3->setObjectName("guideDescriptionLabel3");
        guideDescriptionLabel3->setWordWrap(true);
        guideDescriptionLabel3->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(guideDescriptionLabel3);

        stackedWidget->addWidget(page3);

        verticalLayout->addWidget(stackedWidget);

        buttonLayout = new QHBoxLayout();
        buttonLayout->setObjectName("buttonLayout");
        backButton = new QPushButton(HelpDialog);
        backButton->setObjectName("backButton");

        buttonLayout->addWidget(backButton);

        nextButton = new QPushButton(HelpDialog);
        nextButton->setObjectName("nextButton");

        buttonLayout->addWidget(nextButton);

        closeButton = new QPushButton(HelpDialog);
        closeButton->setObjectName("closeButton");

        buttonLayout->addWidget(closeButton);


        verticalLayout->addLayout(buttonLayout);


        retranslateUi(HelpDialog);

        QMetaObject::connectSlotsByName(HelpDialog);
    } // setupUi

    void retranslateUi(QDialog *HelpDialog)
    {
        HelpDialog->setWindowTitle(QCoreApplication::translate("HelpDialog", "Help", nullptr));
        label1->setText(QCoreApplication::translate("HelpDialog", "First Page Of Guide : How To Use The App", nullptr));
        guideDescriptionLabel1->setText(QCoreApplication::translate("HelpDialog", "Gauss-Jordan Elimination\n"
"\n"
"This image illustrates the Gauss-Jordan elimination method.\n"
"To input the matrix, enter each row in the format:\n"
"(a b c | d) or (a b c d)\n"
"Use the Enter key to move to the next row.\n"
"Each line represents a new row of the augmented matrix.\n"
"Spaces ( ) and the pipe symbol (|) act as separators between matrix elements.", nullptr));
        label2->setText(QCoreApplication::translate("HelpDialog", "Second Page Of Guide : How To Use The App", nullptr));
        guideDescriptionLabel2->setText(QCoreApplication::translate("HelpDialog", "Determinant Calculation\n"
"\n"
"This image represents the method used for calculating the determinant of a matrix.\n"
"To input the matrix, type each row using space-separated values.\n"
"Use the Enter key to move to the next row.\n"
"Each line represents a row of the matrix.\n"
"Spaces act as separators between matrix elements.\n"
"\n"
"Note: Only square matrices (same number of rows and columns) have a determinant.", nullptr));
        label3->setText(QCoreApplication::translate("HelpDialog", "Third Page Of Guide : How To Use The App", nullptr));
        guideDescriptionLabel3->setText(QCoreApplication::translate("HelpDialog", "Inverse Matrix Calculation\n"
"\n"
"This image demonstrates how to compute the inverse of a matrix using the augmented matrix method.\n"
"To input the matrix, type each row with values separated by spaces.\n"
"Press Enter to move to the next row.\n"
"Each line corresponds to one row of the original matrix.\n"
"Spaces act as separators between matrix elements.\n"
"\n"
"Note: Only square matrices that are non-singular (with non-zero determinant) have an inverse.", nullptr));
        backButton->setText(QCoreApplication::translate("HelpDialog", "Previous", nullptr));
        nextButton->setText(QCoreApplication::translate("HelpDialog", "Next", nullptr));
        closeButton->setText(QCoreApplication::translate("HelpDialog", "Close", nullptr));
    } // retranslateUi

};

namespace Ui {
    class HelpDialog: public Ui_HelpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPDIALOG_H
