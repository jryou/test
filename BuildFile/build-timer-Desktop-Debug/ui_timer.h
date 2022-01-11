/********************************************************************************
** Form generated from reading UI file 'timer.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMER_H
#define UI_TIMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_timer
{
public:
    QWidget *centralWidget;
    QDateTimeEdit *dateTimeEdit;
    QTimeEdit *timeEdit;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *timer)
    {
        if (timer->objectName().isEmpty())
            timer->setObjectName(QString::fromUtf8("timer"));
        timer->resize(400, 300);
        centralWidget = new QWidget(timer);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        dateTimeEdit = new QDateTimeEdit(centralWidget);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(190, 30, 194, 26));
        timeEdit = new QTimeEdit(centralWidget);
        timeEdit->setObjectName(QString::fromUtf8("timeEdit"));
        timeEdit->setGeometry(QRect(40, 30, 118, 26));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 90, 291, 31));
        timer->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(timer);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        timer->setMenuBar(menuBar);
        mainToolBar = new QToolBar(timer);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        timer->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(timer);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        timer->setStatusBar(statusBar);

        retranslateUi(timer);

        QMetaObject::connectSlotsByName(timer);
    } // setupUi

    void retranslateUi(QMainWindow *timer)
    {
        timer->setWindowTitle(QApplication::translate("timer", "timer", nullptr));
        label->setText(QApplication::translate("timer", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class timer: public Ui_timer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMER_H
