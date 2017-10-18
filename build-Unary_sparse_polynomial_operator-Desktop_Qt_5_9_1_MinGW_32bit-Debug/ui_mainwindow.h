/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTextBrowser *textBrowser;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *clear;
    QPushButton *diff;
    QPushButton *sum;
    QPushButton *null2;
    QPushButton *num1;
    QPushButton *num2;
    QPushButton *num3;
    QPushButton *x;
    QPushButton *num4;
    QPushButton *num5;
    QPushButton *num6;
    QPushButton *add;
    QPushButton *num7;
    QPushButton *num8;
    QPushButton *num9;
    QPushButton *less;
    QPushButton *A;
    QPushButton *B;
    QPushButton *dot;
    QPushButton *null1;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(264, 259);
        MainWindow->setMinimumSize(QSize(264, 259));
        MainWindow->setMaximumSize(QSize(264, 259));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 241, 31));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(10, 50, 241, 161));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        clear = new QPushButton(widget);
        clear->setObjectName(QStringLiteral("clear"));

        gridLayout->addWidget(clear, 0, 0, 1, 1);

        diff = new QPushButton(widget);
        diff->setObjectName(QStringLiteral("diff"));

        gridLayout->addWidget(diff, 0, 1, 1, 1);

        sum = new QPushButton(widget);
        sum->setObjectName(QStringLiteral("sum"));

        gridLayout->addWidget(sum, 0, 2, 1, 1);

        null2 = new QPushButton(widget);
        null2->setObjectName(QStringLiteral("null2"));

        gridLayout->addWidget(null2, 0, 3, 1, 1);

        num1 = new QPushButton(widget);
        num1->setObjectName(QStringLiteral("num1"));

        gridLayout->addWidget(num1, 1, 0, 1, 1);

        num2 = new QPushButton(widget);
        num2->setObjectName(QStringLiteral("num2"));

        gridLayout->addWidget(num2, 1, 1, 1, 1);

        num3 = new QPushButton(widget);
        num3->setObjectName(QStringLiteral("num3"));

        gridLayout->addWidget(num3, 1, 2, 1, 1);

        x = new QPushButton(widget);
        x->setObjectName(QStringLiteral("x"));

        gridLayout->addWidget(x, 1, 3, 1, 1);

        num4 = new QPushButton(widget);
        num4->setObjectName(QStringLiteral("num4"));

        gridLayout->addWidget(num4, 2, 0, 1, 1);

        num5 = new QPushButton(widget);
        num5->setObjectName(QStringLiteral("num5"));

        gridLayout->addWidget(num5, 2, 1, 1, 1);

        num6 = new QPushButton(widget);
        num6->setObjectName(QStringLiteral("num6"));

        gridLayout->addWidget(num6, 2, 2, 1, 1);

        add = new QPushButton(widget);
        add->setObjectName(QStringLiteral("add"));

        gridLayout->addWidget(add, 2, 3, 1, 1);

        num7 = new QPushButton(widget);
        num7->setObjectName(QStringLiteral("num7"));

        gridLayout->addWidget(num7, 3, 0, 1, 1);

        num8 = new QPushButton(widget);
        num8->setObjectName(QStringLiteral("num8"));

        gridLayout->addWidget(num8, 3, 1, 1, 1);

        num9 = new QPushButton(widget);
        num9->setObjectName(QStringLiteral("num9"));

        gridLayout->addWidget(num9, 3, 2, 1, 1);

        less = new QPushButton(widget);
        less->setObjectName(QStringLiteral("less"));

        gridLayout->addWidget(less, 3, 3, 1, 1);

        A = new QPushButton(widget);
        A->setObjectName(QStringLiteral("A"));

        gridLayout->addWidget(A, 4, 0, 1, 1);

        B = new QPushButton(widget);
        B->setObjectName(QStringLiteral("B"));

        gridLayout->addWidget(B, 4, 1, 1, 1);

        dot = new QPushButton(widget);
        dot->setObjectName(QStringLiteral("dot"));

        gridLayout->addWidget(dot, 4, 2, 1, 1);

        null1 = new QPushButton(widget);
        null1->setObjectName(QStringLiteral("null1"));

        gridLayout->addWidget(null1, 4, 3, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 264, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        clear->setText(QApplication::translate("MainWindow", "C", Q_NULLPTR));
        diff->setText(QApplication::translate("MainWindow", "A-B", Q_NULLPTR));
        sum->setText(QApplication::translate("MainWindow", "A+B", Q_NULLPTR));
        null2->setText(QString());
        num1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        num2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        num3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        x->setText(QApplication::translate("MainWindow", "x^", Q_NULLPTR));
        num4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        num5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        num6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        add->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        num7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        num8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        num9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        less->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        A->setText(QApplication::translate("MainWindow", "A=", Q_NULLPTR));
        B->setText(QApplication::translate("MainWindow", "B=", Q_NULLPTR));
        dot->setText(QApplication::translate("MainWindow", ".", Q_NULLPTR));
        null1->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
