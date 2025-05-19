#ifndef HELPDIALOG_H
#define HELPDIALOG_H

#include <QDialog>

namespace Ui {
    class HelpDialog;
}

class HelpDialog : public QDialog
{
    Q_OBJECT

    public:
    explicit HelpDialog(QWidget *parent = nullptr);
    ~HelpDialog();

    private slots: // 👈 حتما اینو بذار
    void on_nextButton_clicked();
    void on_backButton_clicked();
    void on_closeButton_clicked();

private:
    Ui::HelpDialog *ui;
};

#endif // HELPDIALOG_H

