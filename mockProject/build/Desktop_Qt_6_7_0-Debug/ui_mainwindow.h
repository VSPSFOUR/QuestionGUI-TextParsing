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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *questionLabel;
    QLabel *questionTypeLabel;
    QPushButton *submitButton;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *previousButton;
    QPushButton *nextButton;
    QPushButton *pushButton;
    QStackedWidget *questionBox;
    QWidget *MCQPage;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QRadioButton *option1RadioButton;
    QRadioButton *option2RadioButton;
    QRadioButton *option3RadioButton;
    QRadioButton *option4RadioButton;
    QWidget *page_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *TrueRadioButton;
    QRadioButton *FalseRadioButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(543, 378);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setEnabled(true);
        centralwidget->setAutoFillBackground(false);
        questionLabel = new QLabel(centralwidget);
        questionLabel->setObjectName("questionLabel");
        questionLabel->setGeometry(QRect(40, 44, 381, 51));
        questionTypeLabel = new QLabel(centralwidget);
        questionTypeLabel->setObjectName("questionTypeLabel");
        questionTypeLabel->setGeometry(QRect(40, 20, 311, 18));
        submitButton = new QPushButton(centralwidget);
        submitButton->setObjectName("submitButton");
        submitButton->setGeometry(QRect(420, 20, 91, 41));
        submitButton->setCheckable(false);
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(350, 290, 168, 28));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        previousButton = new QPushButton(layoutWidget);
        previousButton->setObjectName("previousButton");

        horizontalLayout->addWidget(previousButton);

        nextButton = new QPushButton(layoutWidget);
        nextButton->setObjectName("nextButton");

        horizontalLayout->addWidget(nextButton);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 290, 151, 31));
        questionBox = new QStackedWidget(centralwidget);
        questionBox->setObjectName("questionBox");
        questionBox->setGeometry(QRect(60, 90, 431, 171));
        MCQPage = new QWidget();
        MCQPage->setObjectName("MCQPage");
        layoutWidget1 = new QWidget(MCQPage);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(50, 10, 331, 146));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        option1RadioButton = new QRadioButton(layoutWidget1);
        option1RadioButton->setObjectName("option1RadioButton");
        option1RadioButton->setAutoFillBackground(true);
        option1RadioButton->setCheckable(true);
        option1RadioButton->setChecked(false);
        option1RadioButton->setAutoRepeat(false);

        verticalLayout->addWidget(option1RadioButton);

        option2RadioButton = new QRadioButton(layoutWidget1);
        option2RadioButton->setObjectName("option2RadioButton");
        option2RadioButton->setAutoExclusive(true);

        verticalLayout->addWidget(option2RadioButton);

        option3RadioButton = new QRadioButton(layoutWidget1);
        option3RadioButton->setObjectName("option3RadioButton");

        verticalLayout->addWidget(option3RadioButton);

        option4RadioButton = new QRadioButton(layoutWidget1);
        option4RadioButton->setObjectName("option4RadioButton");

        verticalLayout->addWidget(option4RadioButton);

        questionBox->addWidget(MCQPage);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        widget = new QWidget(page_2);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(80, 50, 281, 56));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        TrueRadioButton = new QRadioButton(widget);
        TrueRadioButton->setObjectName("TrueRadioButton");

        verticalLayout_2->addWidget(TrueRadioButton);

        FalseRadioButton = new QRadioButton(widget);
        FalseRadioButton->setObjectName("FalseRadioButton");

        verticalLayout_2->addWidget(FalseRadioButton);

        questionBox->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 543, 23));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        questionBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Mock Quiz", nullptr));
        questionLabel->setText(QCoreApplication::translate("MainWindow", "Question", nullptr));
        questionTypeLabel->setText(QCoreApplication::translate("MainWindow", "QuestionType", nullptr));
        submitButton->setText(QCoreApplication::translate("MainWindow", "Submit", nullptr));
        previousButton->setText(QCoreApplication::translate("MainWindow", "Previous", nullptr));
        nextButton->setText(QCoreApplication::translate("MainWindow", "Next", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "displayQuestionData", nullptr));
        option1RadioButton->setText(QCoreApplication::translate("MainWindow", "Option1", nullptr));
        option2RadioButton->setText(QCoreApplication::translate("MainWindow", "Option2", nullptr));
        option3RadioButton->setText(QCoreApplication::translate("MainWindow", "Option3", nullptr));
        option4RadioButton->setText(QCoreApplication::translate("MainWindow", "Option4", nullptr));
        TrueRadioButton->setText(QCoreApplication::translate("MainWindow", "True", nullptr));
        FalseRadioButton->setText(QCoreApplication::translate("MainWindow", "False", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H