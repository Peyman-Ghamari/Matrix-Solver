// developerinfo.h
#ifndef DEVELOPERINFO_H
#define DEVELOPERINFO_H

#include <QDialog>

namespace Ui {
class DeveloperInfo;
}

class DeveloperInfo : public QDialog {
    Q_OBJECT

public:
    explicit DeveloperInfo(QWidget *parent = nullptr);
    ~DeveloperInfo();

private:
    Ui::DeveloperInfo *ui;
};

#endif // DEVELOPERINFO_H

