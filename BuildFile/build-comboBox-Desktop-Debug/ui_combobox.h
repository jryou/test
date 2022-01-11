/********************************************************************************
** Form generated from reading UI file 'combobox.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMBOBOX_H
#define UI_COMBOBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_comboBox
{
public:
    QWidget *centralWidget;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;
    QLineEdit *lineEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *comboBox)
    {
        if (comboBox->objectName().isEmpty())
            comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->resize(400, 300);
        centralWidget = new QWidget(comboBox);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        comboBox_2 = new QComboBox(centralWidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(30, 30, 86, 25));
        comboBox_3 = new QComboBox(centralWidget);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(270, 30, 86, 25));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(60, 130, 271, 31));
        comboBox->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(comboBox);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        comboBox->setMenuBar(menuBar);
        mainToolBar = new QToolBar(comboBox);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        comboBox->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(comboBox);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        comboBox->setStatusBar(statusBar);

        retranslateUi(comboBox);

        QMetaObject::connectSlotsByName(comboBox);
    } // setupUi

    void retranslateUi(QMainWindow *comboBox)
    {
        comboBox->setWindowTitle(QApplication::translate("comboBox", "comboBox", nullptr));
    } // retranslateUi

};

namespace Ui {
    class comboBox: public Ui_comboBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMBOBOX_H
