#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "helpdialog.h"  // اضافه کردن HelpDialog

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

protected:
    bool eventFilter(QObject *obj, QEvent *event) override;

    private slots:
        void onGaussJordanClicked();
    void showDeveloperInfo();
    void onDeterminantClicked();
    void onInverseClicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
