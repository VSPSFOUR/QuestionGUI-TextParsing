#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_enrollButton_clicked();

    void on_nextNamePageButton_clicked();

    void on_avatar1_clicked();

    void on_avatar2_clicked();

    void on_avatar3_clicked();
    void displayLoginDetailsPage();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
