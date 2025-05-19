#include "developerinfo.h"
#include "ui_developerinfo.h"

DeveloperInfo::DeveloperInfo(QWidget *parent)
    : QDialog(parent), ui(new Ui::DeveloperInfo) {
    ui->setupUi(this);
    this->setWindowTitle("Developer Info");

    // Style برای کل فرم
    this->setStyleSheet("background-color: #eafaf1;");

    // Style سفارشی برای لیبل‌ها
    ui->titleLabel->setStyleSheet("color: #6a0dad; font-size: 20px; font-weight: bold; background-color: #c8f7dc; padding: 8px; border-radius: 5px;");
    ui->emailLabel->setStyleSheet("color: #333; font-size: 14px; background-color: #dcfce7; padding: 5px;");
    ui->githubLabel->setStyleSheet("color: #333; font-size: 14px; background-color: #dcfce7; padding: 5px;");
    ui->telegramLabel->setStyleSheet("color: #333; font-size: 14px; background-color: #dcfce7; padding: 5px;");
    ui->copyrightLabel->setStyleSheet(
        "color: #999;"
        "font-size: 12px;"
        "font-style: italic;"
        "margin-top: 10px;"
        "background-color: #f3e5f5;"
        "border-radius: 3px;"
        "padding: 4px;"
    );

}

DeveloperInfo::~DeveloperInfo() {
    delete ui;
}

