/********************************************************************************
** Form generated from reading UI file 'button_example.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUTTON_EXAMPLE_H
#define UI_BUTTON_EXAMPLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_button_example
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QLabel *label;
    QPushButton *pushButton_1;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *button_example)
    {
        if (button_example->objectName().isEmpty())
            button_example->setObjectName(QString::fromUtf8("button_example"));
        button_example->resize(777, 541);
        centralWidget = new QWidget(button_example);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(510, 210, 151, 61));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(510, 310, 151, 61));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 330, 191, 31));
        pushButton_1 = new QPushButton(centralWidget);
        pushButton_1->setObjectName(QString::fromUtf8("pushButton_1"));
        pushButton_1->setGeometry(QRect(510, 110, 151, 61));
        button_example->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(button_example);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 777, 22));
        button_example->setMenuBar(menuBar);
        mainToolBar = new QToolBar(button_example);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        button_example->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(button_example);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        button_example->setStatusBar(statusBar);

        retranslateUi(button_example);

        QMetaObject::connectSlotsByName(button_example);
    } // setupUi

    void retranslateUi(QMainWindow *button_example)
    {
        button_example->setWindowTitle(QApplication::translate("button_example", "button_example", nullptr));
        pushButton_2->setText(QApplication::translate("button_example", "PushButton", nullptr));
        pushButton_3->setText(QApplication::translate("button_example", "PushButton", nullptr));
        label->setText(QApplication::translate("button_example", "TextLabel", nullptr));
        pushButton_1->setText(QApplication::translate("button_example", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class button_example: public Ui_button_example {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUTTON_EXAMPLE_H
