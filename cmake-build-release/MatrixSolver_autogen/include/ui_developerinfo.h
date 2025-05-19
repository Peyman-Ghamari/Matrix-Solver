/********************************************************************************
** Form generated from reading UI file 'developerinfo.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVELOPERINFO_H
#define UI_DEVELOPERINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DeveloperInfo
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *titleLabel;
    QLabel *emailLabel;
    QLabel *githubLabel;
    QLabel *telegramLabel;
    QSpacerItem *verticalSpacer;
    QLabel *copyrightLabel;

    void setupUi(QDialog *DeveloperInfo)
    {
        if (DeveloperInfo->objectName().isEmpty())
            DeveloperInfo->setObjectName("DeveloperInfo");
        DeveloperInfo->resize(400, 280);
        DeveloperInfo->setStyleSheet(QString::fromUtf8("\n"
"                background-color: #e0f7f1;\n"
"                color: #4a148c;\n"
"                font-family: \"Segoe UI\";\n"
"                font-size: 14px;\n"
"            "));
        verticalLayout = new QVBoxLayout(DeveloperInfo);
        verticalLayout->setObjectName("verticalLayout");
        titleLabel = new QLabel(DeveloperInfo);
        titleLabel->setObjectName("titleLabel");
        titleLabel->setAlignment(Qt::AlignCenter);
        titleLabel->setStyleSheet(QString::fromUtf8("\n"
"                            font-size: 18px;\n"
"                            font-weight: bold;\n"
"                            color: #2e7d32;\n"
"                        "));

        verticalLayout->addWidget(titleLabel);

        emailLabel = new QLabel(DeveloperInfo);
        emailLabel->setObjectName("emailLabel");
        emailLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(emailLabel);

        githubLabel = new QLabel(DeveloperInfo);
        githubLabel->setObjectName("githubLabel");
        githubLabel->setOpenExternalLinks(true);
        githubLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(githubLabel);

        telegramLabel = new QLabel(DeveloperInfo);
        telegramLabel->setObjectName("telegramLabel");
        telegramLabel->setOpenExternalLinks(true);
        telegramLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(telegramLabel);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        copyrightLabel = new QLabel(DeveloperInfo);
        copyrightLabel->setObjectName("copyrightLabel");
        copyrightLabel->setAlignment(Qt::AlignCenter);
        copyrightLabel->setStyleSheet(QString::fromUtf8("\n"
"                            color: #000000;\n"
"                            font-size: 12px;\n"
"                            font-style: italic;\n"
"                            background-color: #f3e5f5;\n"
"                            padding: 4px;\n"
"                            border-radius: 4px;\n"
"                        "));

        verticalLayout->addWidget(copyrightLabel);


        retranslateUi(DeveloperInfo);

        QMetaObject::connectSlotsByName(DeveloperInfo);
    } // setupUi

    void retranslateUi(QDialog *DeveloperInfo)
    {
        DeveloperInfo->setWindowTitle(QCoreApplication::translate("DeveloperInfo", "Developer Info", nullptr));
        titleLabel->setText(QCoreApplication::translate("DeveloperInfo", "Developer Information", nullptr));
        emailLabel->setText(QCoreApplication::translate("DeveloperInfo", "\n"
"    <span style=\"white-space:nowrap;\">\n"
"      <img src=\"images/email.png\" width=\"20\" height=\"20\" style=\"vertical-align:middle; margin-right:6px;\" />\n"
"      Peyman.ghamari.g.p@gmail.com\n"
"    </span>\n"
"   ", nullptr));
        githubLabel->setText(QCoreApplication::translate("DeveloperInfo", "\n"
"    <span style=\"white-space:nowrap;\">\n"
"      <img src=\"images/github.png\" width=\"20\" height=\"20\" style=\"vertical-align:middle; margin-right:6px;\" />\n"
"      <a href=\"https://github.com/Peyman-Ghamari\">Peyman-Ghamari</a>\n"
"    </span>\n"
"   ", nullptr));
        telegramLabel->setText(QCoreApplication::translate("DeveloperInfo", "\n"
"    <span style=\"white-space:nowrap;\">\n"
"      <img src=\"images/telegram.png\" width=\"20\" height=\"20\" style=\"vertical-align:middle; margin-right:6px;\" />\n"
"      <a href=\"https://t.me/p_ghamari\">p_ghamari</a>\n"
"    </span>\n"
"   ", nullptr));
        copyrightLabel->setText(QCoreApplication::translate("DeveloperInfo", "\302\251 Copyright by PM (Peyman Ghamari)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeveloperInfo: public Ui_DeveloperInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVELOPERINFO_H
