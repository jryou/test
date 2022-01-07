/********************************************************************************
** Form generated from reading UI file 'checkbox.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKBOX_H
#define UI_CHECKBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CheckBox
{
public:
    QWidget *centralWidget;
    QCheckBox *checkBox_5;
    QCheckBox *checkBox_6;
    QCheckBox *checkBox_7;
    QLineEdit *lineEdit_3;
    QLabel *label_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *pushButton_2;
    QWidget *widget1;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QCheckBox *checkBox;
    QCheckBox *checkBox_2;
    QCheckBox *checkBox_3;
    QCheckBox *checkBox_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CheckBox)
    {
        if (CheckBox->objectName().isEmpty())
            CheckBox->setObjectName(QString::fromUtf8("CheckBox"));
        CheckBox->resize(612, 416);
        centralWidget = new QWidget(CheckBox);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        checkBox_5 = new QCheckBox(centralWidget);
        checkBox_5->setObjectName(QString::fromUtf8("checkBox_5"));
        checkBox_5->setGeometry(QRect(240, 100, 92, 23));
        checkBox_6 = new QCheckBox(centralWidget);
        checkBox_6->setObjectName(QString::fromUtf8("checkBox_6"));
        checkBox_6->setGeometry(QRect(240, 150, 92, 23));
        checkBox_7 = new QCheckBox(centralWidget);
        checkBox_7->setObjectName(QString::fromUtf8("checkBox_7"));
        checkBox_7->setGeometry(QRect(240, 200, 92, 23));
        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(240, 270, 131, 25));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(240, 240, 67, 17));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(420, 40, 171, 271));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        lineEdit_2 = new QLineEdit(widget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        verticalLayout->addWidget(lineEdit_2);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout->addWidget(pushButton_2);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(21, 41, 181, 271));
        verticalLayout_2 = new QVBoxLayout(widget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget1);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        checkBox = new QCheckBox(widget1);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        verticalLayout_2->addWidget(checkBox);

        checkBox_2 = new QCheckBox(widget1);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));

        verticalLayout_2->addWidget(checkBox_2);

        checkBox_3 = new QCheckBox(widget1);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));

        verticalLayout_2->addWidget(checkBox_3);

        checkBox_4 = new QCheckBox(widget1);
        checkBox_4->setObjectName(QString::fromUtf8("checkBox_4"));

        verticalLayout_2->addWidget(checkBox_4);

        CheckBox->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CheckBox);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 612, 22));
        CheckBox->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CheckBox);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        CheckBox->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CheckBox);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        CheckBox->setStatusBar(statusBar);

        retranslateUi(CheckBox);

        QMetaObject::connectSlotsByName(CheckBox);
    } // setupUi

    void retranslateUi(QMainWindow *CheckBox)
    {
        CheckBox->setWindowTitle(QApplication::translate("CheckBox", "CheckBox", nullptr));
        checkBox_5->setText(QApplication::translate("CheckBox", "3\352\260\234\354\233\224\355\225\240\353\266\200", nullptr));
        checkBox_6->setText(QApplication::translate("CheckBox", "6\352\260\234\354\233\224\355\225\240\353\266\200", nullptr));
        checkBox_7->setText(QApplication::translate("CheckBox", "9\352\260\234\354\233\224\355\225\240\353\266\200", nullptr));
        label_2->setText(QApplication::translate("CheckBox", "\353\247\244\353\213\254\354\232\224\352\270\210", nullptr));
        pushButton->setText(QApplication::translate("CheckBox", "total", nullptr));
        pushButton_2->setText(QApplication::translate("CheckBox", "reset", nullptr));
        label->setText(QApplication::translate("CheckBox", "\353\224\234\353\237\211 \354\203\201\354\212\271 \355\232\250\354\234\250 \352\263\204\354\202\260", nullptr));
        checkBox->setText(QApplication::translate("CheckBox", "\354\240\204\354\225\225 3\352\260\234 12\353\247\214 \352\263\250\353\223\234", nullptr));
        checkBox_2->setText(QApplication::translate("CheckBox", "\352\260\225\355\231\224 20\353\247\214 \352\263\250\353\223\234", nullptr));
        checkBox_3->setText(QApplication::translate("CheckBox", "9\353\240\231\353\251\270\355\231\2242\352\260\234 25\353\247\214 \352\263\250\353\223\234", nullptr));
        checkBox_4->setText(QApplication::translate("CheckBox", "\354\233\220\355\225\234\354\240\204\352\260\201 30\353\247\214 \352\263\250\353\223\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CheckBox: public Ui_CheckBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKBOX_H
