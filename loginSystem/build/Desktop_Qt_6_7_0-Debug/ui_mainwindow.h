/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QStackedWidget *stackedWidget;
    QWidget *enrollPage;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *welcomeLabel;
    QPushButton *enrollButton;
    QWidget *namePage;
    QPushButton *nextNamePageButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *nameInputLabel;
    QLineEdit *nameInputBox;
    QWidget *avatarSelectPage;
    QPushButton *avatar1;
    QPushButton *avatar2;
    QPushButton *avatar3;
    QWidget *displayPage;
    QLabel *nameDisplayLabel;
    QPushButton *AvatarDisplayButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(623, 344);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        enrollPage = new QWidget();
        enrollPage->setObjectName("enrollPage");
        layoutWidget = new QWidget(enrollPage);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(180, 30, 291, 221));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        welcomeLabel = new QLabel(layoutWidget);
        welcomeLabel->setObjectName("welcomeLabel");
        welcomeLabel->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(welcomeLabel);

        enrollButton = new QPushButton(layoutWidget);
        enrollButton->setObjectName("enrollButton");

        verticalLayout->addWidget(enrollButton);

        stackedWidget->addWidget(enrollPage);
        namePage = new QWidget();
        namePage->setObjectName("namePage");
        nextNamePageButton = new QPushButton(namePage);
        nextNamePageButton->setObjectName("nextNamePageButton");
        nextNamePageButton->setGeometry(QRect(460, 230, 87, 26));
        layoutWidget1 = new QWidget(namePage);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(140, 87, 321, 61));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        nameInputLabel = new QLabel(layoutWidget1);
        nameInputLabel->setObjectName("nameInputLabel");

        horizontalLayout_2->addWidget(nameInputLabel);

        nameInputBox = new QLineEdit(layoutWidget1);
        nameInputBox->setObjectName("nameInputBox");

        horizontalLayout_2->addWidget(nameInputBox);

        stackedWidget->addWidget(namePage);
        avatarSelectPage = new QWidget();
        avatarSelectPage->setObjectName("avatarSelectPage");
        avatar1 = new QPushButton(avatarSelectPage);
        avatar1->setObjectName("avatar1");
        avatar1->setGeometry(QRect(100, 80, 87, 91));
        avatar1->setStyleSheet(QString::fromUtf8("\n"
"image: url(:/images/avatar_pics/test1.jpeg);"));
        avatar2 = new QPushButton(avatarSelectPage);
        avatar2->setObjectName("avatar2");
        avatar2->setGeometry(QRect(260, 80, 87, 91));
        avatar2->setStyleSheet(QString::fromUtf8("image: url(:/images/avatar_pics/test2.jpeg);"));
        avatar3 = new QPushButton(avatarSelectPage);
        avatar3->setObjectName("avatar3");
        avatar3->setGeometry(QRect(420, 80, 87, 91));
        avatar3->setStyleSheet(QString::fromUtf8("image: url(:/images/avatar_pics/test3.jpeg);"));
        stackedWidget->addWidget(avatarSelectPage);
        displayPage = new QWidget();
        displayPage->setObjectName("displayPage");
        nameDisplayLabel = new QLabel(displayPage);
        nameDisplayLabel->setObjectName("nameDisplayLabel");
        nameDisplayLabel->setGeometry(QRect(210, 110, 251, 18));
        AvatarDisplayButton = new QPushButton(displayPage);
        AvatarDisplayButton->setObjectName("AvatarDisplayButton");
        AvatarDisplayButton->setEnabled(false);
        AvatarDisplayButton->setGeometry(QRect(90, 80, 87, 81));
        stackedWidget->addWidget(displayPage);

        horizontalLayout->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 623, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        welcomeLabel->setText(QCoreApplication::translate("MainWindow", "Welcome Soldier", nullptr));
        enrollButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        nextNamePageButton->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        nameInputLabel->setText(QCoreApplication::translate("MainWindow", "Name : ", nullptr));
        avatar1->setText(QString());
        avatar2->setText(QString());
        avatar3->setText(QString());
        nameDisplayLabel->setText(QCoreApplication::translate("MainWindow", "Your Name", nullptr));
        AvatarDisplayButton->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
