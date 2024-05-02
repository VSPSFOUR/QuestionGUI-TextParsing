#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>
std::string name = "John Doe";
QString avatarStyleSheet;
int avatarValue = -1;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_enrollButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_nextNamePageButton_clicked()
{
    name = ui->nameInputBox->text().toStdString();
    ui->stackedWidget->setCurrentIndex(2);

}




void MainWindow :: displayLoginDetailsPage(){
    ui->stackedWidget->setCurrentIndex(3);
    ui->AvatarDisplayButton->setStyleSheet(avatarStyleSheet);
    ui->nameDisplayLabel->setText(QString::fromStdString(name));
}

void MainWindow::on_avatar1_clicked()
{
    // avatarValue = 1;
    /* save path of picture */

    avatarStyleSheet = ui->avatar1->styleSheet();
    displayLoginDetailsPage();
    /* transition to next display page */

}


void MainWindow::on_avatar2_clicked()
{
    avatarStyleSheet = ui->avatar2->styleSheet();
    ui->stackedWidget->setCurrentIndex(3);
    displayLoginDetailsPage();

}



void MainWindow::on_avatar3_clicked()
{
    avatarStyleSheet = ui->avatar3->styleSheet();
    ui->stackedWidget->setCurrentIndex(3);
    displayLoginDetailsPage();


}

