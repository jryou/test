/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_dialog
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *dialog)
    {
        if (dialog->objectName().isEmpty())
            dialog->setObjectName(QString::fromUtf8("dialog"));
        dialog->resize(400, 300);
        menuBar = new QMenuBar(dialog);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        dialog->setMenuBar(menuBar);
        mainToolBar = new QToolBar(dialog);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        dialog->addToolBar(mainToolBar);
        centralWidget = new QWidget(dialog);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        dialog->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(dialog);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        dialog->setStatusBar(statusBar);

        retranslateUi(dialog);

        QMetaObject::connectSlotsByName(dialog);
    } // setupUi

    void retranslateUi(QMainWindow *dialog)
    {
        dialog->setWindowTitle(QApplication::translate("dialog", "dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class dialog: public Ui_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
