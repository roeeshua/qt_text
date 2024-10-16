/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *btnClearAll;
    QPushButton *btnPeriod;
    QPushButton *btnDaoShu;
    QPushButton *btnNum3;
    QPushButton *btnPercentage;
    QPushButton *btnNum8;
    QPushButton *btnNum4;
    QPushButton *btnPOM;
    QPushButton *btnNum2;
    QPushButton *btnSqrt;
    QPushButton *btnSquare;
    QPushButton *btnNum5;
    QPushButton *btnNum6;
    QPushButton *btnClear;
    QPushButton *btnNum0;
    QPushButton *btnNum7;
    QPushButton *btnNum9;
    QPushButton *btnNum1;
    QPushButton *btnDel;
    QPushButton *btnDivide;
    QPushButton *btnMultiple;
    QPushButton *btnMinus;
    QPushButton *btnPlus;
    QPushButton *btnEqual;
    QLineEdit *display;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(441, 377);
        MainWindow->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font-size:12pt;\n"
"	border-radius:2px;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        btnClearAll = new QPushButton(centralwidget);
        btnClearAll->setObjectName("btnClearAll");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(btnClearAll->sizePolicy().hasHeightForWidth());
        btnClearAll->setSizePolicy(sizePolicy);
        btnClearAll->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 255, 127);\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(42, 42, 0);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(0, 0, 0);\n"
"}"));

        gridLayout->addWidget(btnClearAll, 1, 2, 1, 1);

        btnPeriod = new QPushButton(centralwidget);
        btnPeriod->setObjectName("btnPeriod");
        sizePolicy.setHeightForWidth(btnPeriod->sizePolicy().hasHeightForWidth());
        btnPeriod->setSizePolicy(sizePolicy);
        btnPeriod->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 0, 127);\n"
"color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(85, 0, 0);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(0, 0, 0);\n"
"}"));

        gridLayout->addWidget(btnPeriod, 7, 2, 1, 1);

        btnDaoShu = new QPushButton(centralwidget);
        btnDaoShu->setObjectName("btnDaoShu");
        sizePolicy.setHeightForWidth(btnDaoShu->sizePolicy().hasHeightForWidth());
        btnDaoShu->setSizePolicy(sizePolicy);
        btnDaoShu->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 0, 127);\n"
"color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(85, 0, 0);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(0, 0, 0);\n"
"}"));

        gridLayout->addWidget(btnDaoShu, 3, 0, 1, 1);

        btnNum3 = new QPushButton(centralwidget);
        btnNum3->setObjectName("btnNum3");
        sizePolicy.setHeightForWidth(btnNum3->sizePolicy().hasHeightForWidth());
        btnNum3->setSizePolicy(sizePolicy);
        btnNum3->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"	color: rgb(255,255,255);\n"
"	background-color: rgb(0, 0, 127);\n"
"}\n"
"\n"
"QPushButton{\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(85, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"\n"
""));

        gridLayout->addWidget(btnNum3, 6, 2, 1, 1);

        btnPercentage = new QPushButton(centralwidget);
        btnPercentage->setObjectName("btnPercentage");
        sizePolicy.setHeightForWidth(btnPercentage->sizePolicy().hasHeightForWidth());
        btnPercentage->setSizePolicy(sizePolicy);
        btnPercentage->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 0, 127);\n"
"color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(85, 0, 0);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(0, 0, 0);\n"
"}"));

        gridLayout->addWidget(btnPercentage, 1, 0, 1, 1);

        btnNum8 = new QPushButton(centralwidget);
        btnNum8->setObjectName("btnNum8");
        sizePolicy.setHeightForWidth(btnNum8->sizePolicy().hasHeightForWidth());
        btnNum8->setSizePolicy(sizePolicy);
        btnNum8->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"	color: rgb(255,255,255);\n"
"	background-color: rgb(0, 0, 127);\n"
"}\n"
"\n"
"QPushButton{\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(85, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"\n"
""));

        gridLayout->addWidget(btnNum8, 4, 1, 1, 1);

        btnNum4 = new QPushButton(centralwidget);
        btnNum4->setObjectName("btnNum4");
        sizePolicy.setHeightForWidth(btnNum4->sizePolicy().hasHeightForWidth());
        btnNum4->setSizePolicy(sizePolicy);
        btnNum4->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"	color: rgb(255,255,255);\n"
"	background-color: rgb(0, 0, 127);\n"
"}\n"
"\n"
"QPushButton{\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(85, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"\n"
""));

        gridLayout->addWidget(btnNum4, 5, 0, 1, 1);

        btnPOM = new QPushButton(centralwidget);
        btnPOM->setObjectName("btnPOM");
        sizePolicy.setHeightForWidth(btnPOM->sizePolicy().hasHeightForWidth());
        btnPOM->setSizePolicy(sizePolicy);
        btnPOM->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 0, 127);\n"
"color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(85, 0, 0);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(0, 0, 0);\n"
"}"));

        gridLayout->addWidget(btnPOM, 7, 0, 1, 1);

        btnNum2 = new QPushButton(centralwidget);
        btnNum2->setObjectName("btnNum2");
        sizePolicy.setHeightForWidth(btnNum2->sizePolicy().hasHeightForWidth());
        btnNum2->setSizePolicy(sizePolicy);
        btnNum2->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"	color: rgb(255,255,255);\n"
"	background-color: rgb(0, 0, 127);\n"
"}\n"
"\n"
"QPushButton{\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(85, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"\n"
""));

        gridLayout->addWidget(btnNum2, 6, 1, 1, 1);

        btnSqrt = new QPushButton(centralwidget);
        btnSqrt->setObjectName("btnSqrt");
        sizePolicy.setHeightForWidth(btnSqrt->sizePolicy().hasHeightForWidth());
        btnSqrt->setSizePolicy(sizePolicy);
        btnSqrt->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 0, 127);\n"
"color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(85, 0, 0);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(0, 0, 0);\n"
"}"));

        gridLayout->addWidget(btnSqrt, 3, 2, 1, 1);

        btnSquare = new QPushButton(centralwidget);
        btnSquare->setObjectName("btnSquare");
        sizePolicy.setHeightForWidth(btnSquare->sizePolicy().hasHeightForWidth());
        btnSquare->setSizePolicy(sizePolicy);
        btnSquare->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 0, 127);\n"
"color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(85, 0, 0);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(0, 0, 0);\n"
"}"));

        gridLayout->addWidget(btnSquare, 3, 1, 1, 1);

        btnNum5 = new QPushButton(centralwidget);
        btnNum5->setObjectName("btnNum5");
        sizePolicy.setHeightForWidth(btnNum5->sizePolicy().hasHeightForWidth());
        btnNum5->setSizePolicy(sizePolicy);
        btnNum5->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"	color: rgb(255,255,255);\n"
"	background-color: rgb(0, 0, 127);\n"
"}\n"
"\n"
"QPushButton{\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(85, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"\n"
""));

        gridLayout->addWidget(btnNum5, 5, 1, 1, 1);

        btnNum6 = new QPushButton(centralwidget);
        btnNum6->setObjectName("btnNum6");
        sizePolicy.setHeightForWidth(btnNum6->sizePolicy().hasHeightForWidth());
        btnNum6->setSizePolicy(sizePolicy);
        btnNum6->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"	color: rgb(255,255,255);\n"
"	background-color: rgb(0, 0, 127);\n"
"}\n"
"\n"
"QPushButton{\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(85, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"\n"
""));

        gridLayout->addWidget(btnNum6, 5, 2, 1, 1);

        btnClear = new QPushButton(centralwidget);
        btnClear->setObjectName("btnClear");
        sizePolicy.setHeightForWidth(btnClear->sizePolicy().hasHeightForWidth());
        btnClear->setSizePolicy(sizePolicy);
        btnClear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 255, 127);\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(42, 42, 0);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(0, 0, 0);\n"
"}"));

        gridLayout->addWidget(btnClear, 1, 1, 1, 1);

        btnNum0 = new QPushButton(centralwidget);
        btnNum0->setObjectName("btnNum0");
        sizePolicy.setHeightForWidth(btnNum0->sizePolicy().hasHeightForWidth());
        btnNum0->setSizePolicy(sizePolicy);
        btnNum0->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"	color: rgb(255,255,255);\n"
"	background-color: rgb(0, 0, 127);\n"
"}\n"
"\n"
"QPushButton{\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(85, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"\n"
""));

        gridLayout->addWidget(btnNum0, 7, 1, 1, 1);

        btnNum7 = new QPushButton(centralwidget);
        btnNum7->setObjectName("btnNum7");
        sizePolicy.setHeightForWidth(btnNum7->sizePolicy().hasHeightForWidth());
        btnNum7->setSizePolicy(sizePolicy);
        btnNum7->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"	color: rgb(255,255,255);\n"
"	background-color: rgb(0, 0, 127);\n"
"}\n"
"\n"
"QPushButton{\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(85, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"\n"
""));

        gridLayout->addWidget(btnNum7, 4, 0, 1, 1);

        btnNum9 = new QPushButton(centralwidget);
        btnNum9->setObjectName("btnNum9");
        sizePolicy.setHeightForWidth(btnNum9->sizePolicy().hasHeightForWidth());
        btnNum9->setSizePolicy(sizePolicy);
        btnNum9->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"	color: rgb(255,255,255);\n"
"	background-color: rgb(0, 0, 127);\n"
"}\n"
"\n"
"QPushButton{\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(85, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"\n"
""));

        gridLayout->addWidget(btnNum9, 4, 2, 1, 1);

        btnNum1 = new QPushButton(centralwidget);
        btnNum1->setObjectName("btnNum1");
        sizePolicy.setHeightForWidth(btnNum1->sizePolicy().hasHeightForWidth());
        btnNum1->setSizePolicy(sizePolicy);
        btnNum1->setStyleSheet(QString::fromUtf8("QPushButton:hover{\n"
"	color: rgb(255,255,255);\n"
"	background-color: rgb(0, 0, 127);\n"
"}\n"
"\n"
"QPushButton{\n"
"	color: rgb(0, 0, 0);\n"
"	background-color: rgb(85, 255, 255);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"\n"
""));

        gridLayout->addWidget(btnNum1, 6, 0, 1, 1);

        btnDel = new QPushButton(centralwidget);
        btnDel->setObjectName("btnDel");
        sizePolicy.setHeightForWidth(btnDel->sizePolicy().hasHeightForWidth());
        btnDel->setSizePolicy(sizePolicy);
        btnDel->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 255, 127);\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(42, 42, 0);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(0, 0, 0);\n"
"}"));

        gridLayout->addWidget(btnDel, 1, 3, 1, 1);

        btnDivide = new QPushButton(centralwidget);
        btnDivide->setObjectName("btnDivide");
        sizePolicy.setHeightForWidth(btnDivide->sizePolicy().hasHeightForWidth());
        btnDivide->setSizePolicy(sizePolicy);
        btnDivide->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 0, 127);\n"
"color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(85, 0, 0);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(0, 0, 0);\n"
"}"));

        gridLayout->addWidget(btnDivide, 3, 3, 1, 1);

        btnMultiple = new QPushButton(centralwidget);
        btnMultiple->setObjectName("btnMultiple");
        sizePolicy.setHeightForWidth(btnMultiple->sizePolicy().hasHeightForWidth());
        btnMultiple->setSizePolicy(sizePolicy);
        btnMultiple->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 0, 127);\n"
"color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(85, 0, 0);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(0, 0, 0);\n"
"}"));

        gridLayout->addWidget(btnMultiple, 4, 3, 1, 1);

        btnMinus = new QPushButton(centralwidget);
        btnMinus->setObjectName("btnMinus");
        sizePolicy.setHeightForWidth(btnMinus->sizePolicy().hasHeightForWidth());
        btnMinus->setSizePolicy(sizePolicy);
        btnMinus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 0, 127);\n"
"color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(85, 0, 0);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(0, 0, 0);\n"
"}"));

        gridLayout->addWidget(btnMinus, 5, 3, 1, 1);

        btnPlus = new QPushButton(centralwidget);
        btnPlus->setObjectName("btnPlus");
        sizePolicy.setHeightForWidth(btnPlus->sizePolicy().hasHeightForWidth());
        btnPlus->setSizePolicy(sizePolicy);
        btnPlus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"background-color: rgb(255, 0, 127);\n"
"color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(85, 0, 0);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(0, 0, 0);\n"
"}"));

        gridLayout->addWidget(btnPlus, 6, 3, 1, 1);

        btnEqual = new QPushButton(centralwidget);
        btnEqual->setObjectName("btnEqual");
        sizePolicy.setHeightForWidth(btnEqual->sizePolicy().hasHeightForWidth());
        btnEqual->setSizePolicy(sizePolicy);
        btnEqual->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background-color: rgb(255, 255, 127);\n"
"	color: rgb(0, 0, 0);\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(42, 42, 0);\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"	background-color: rgb(0, 0, 0);\n"
"}"));

        gridLayout->addWidget(btnEqual, 7, 3, 1, 1);

        display = new QLineEdit(centralwidget);
        display->setObjectName("display");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(display->sizePolicy().hasHeightForWidth());
        display->setSizePolicy(sizePolicy1);
        display->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"font: 12pt \"Microsoft YaHei UI\";\n"
"color: rgb(0, 0, 0);"));
        display->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        gridLayout->addWidget(display, 0, 0, 1, 4);


        verticalLayout->addLayout(gridLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 441, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btnClearAll->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        btnPeriod->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        btnDaoShu->setText(QCoreApplication::translate("MainWindow", "1/x", nullptr));
        btnNum3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btnPercentage->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        btnNum8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btnNum4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btnPOM->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        btnNum2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btnSqrt->setText(QCoreApplication::translate("MainWindow", "\342\210\232x", nullptr));
        btnSquare->setText(QCoreApplication::translate("MainWindow", "x\302\262", nullptr));
        btnNum5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btnNum6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btnClear->setText(QCoreApplication::translate("MainWindow", "CE", nullptr));
        btnNum0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btnNum7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btnNum9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btnNum1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btnDel->setText(QCoreApplication::translate("MainWindow", "\342\214\253", nullptr));
        btnDivide->setText(QCoreApplication::translate("MainWindow", "\303\267", nullptr));
        btnMultiple->setText(QCoreApplication::translate("MainWindow", "\303\227", nullptr));
        btnMinus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btnPlus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnEqual->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        display->setPlaceholderText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
