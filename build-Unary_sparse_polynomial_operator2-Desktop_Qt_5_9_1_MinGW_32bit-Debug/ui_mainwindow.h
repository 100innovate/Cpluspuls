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
#include <QtWidgets/QLabel>
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
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *sum;
    QPushButton *clear;
    QPushButton *diff;
    QPushButton *num2;
    QPushButton *num4;
    QPushButton *num3;
    QPushButton *x;
    QPushButton *num1;
    QPushButton *num6;
    QPushButton *add;
    QPushButton *num7;
    QPushButton *num8;
    QPushButton *num5;
    QPushButton *A;
    QPushButton *dot;
    QPushButton *B;
    QPushButton *less;
    QPushButton *null1;
    QPushButton *num9;
    QPushButton *null2;
    QTextBrowser *textBrowser;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(261, 295);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 80, 241, 181));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        sum = new QPushButton(layoutWidget);
        sum->setObjectName(QStringLiteral("sum"));

        gridLayout->addWidget(sum, 0, 2, 1, 1);

        clear = new QPushButton(layoutWidget);
        clear->setObjectName(QStringLiteral("clear"));

        gridLayout->addWidget(clear, 0, 0, 1, 1);

        diff = new QPushButton(layoutWidget);
        diff->setObjectName(QStringLiteral("diff"));

        gridLayout->addWidget(diff, 0, 1, 1, 1);

        num2 = new QPushButton(layoutWidget);
        num2->setObjectName(QStringLiteral("num2"));

        gridLayout->addWidget(num2, 1, 1, 1, 1);

        num4 = new QPushButton(layoutWidget);
        num4->setObjectName(QStringLiteral("num4"));

        gridLayout->addWidget(num4, 2, 0, 1, 1);

        num3 = new QPushButton(layoutWidget);
        num3->setObjectName(QStringLiteral("num3"));

        gridLayout->addWidget(num3, 1, 2, 1, 1);

        x = new QPushButton(layoutWidget);
        x->setObjectName(QStringLiteral("x"));

        gridLayout->addWidget(x, 1, 3, 1, 1);

        num1 = new QPushButton(layoutWidget);
        num1->setObjectName(QStringLiteral("num1"));

        gridLayout->addWidget(num1, 1, 0, 1, 1);

        num6 = new QPushButton(layoutWidget);
        num6->setObjectName(QStringLiteral("num6"));

        gridLayout->addWidget(num6, 2, 2, 1, 1);

        add = new QPushButton(layoutWidget);
        add->setObjectName(QStringLiteral("add"));

        gridLayout->addWidget(add, 2, 3, 1, 1);

        num7 = new QPushButton(layoutWidget);
        num7->setObjectName(QStringLiteral("num7"));

        gridLayout->addWidget(num7, 3, 0, 1, 1);

        num8 = new QPushButton(layoutWidget);
        num8->setObjectName(QStringLiteral("num8"));

        gridLayout->addWidget(num8, 3, 1, 1, 1);

        num5 = new QPushButton(layoutWidget);
        num5->setObjectName(QStringLiteral("num5"));

        gridLayout->addWidget(num5, 2, 1, 1, 1);

        A = new QPushButton(layoutWidget);
        A->setObjectName(QStringLiteral("A"));

        gridLayout->addWidget(A, 4, 0, 1, 1);

        dot = new QPushButton(layoutWidget);
        dot->setObjectName(QStringLiteral("dot"));

        gridLayout->addWidget(dot, 4, 2, 1, 1);

        B = new QPushButton(layoutWidget);
        B->setObjectName(QStringLiteral("B"));

        gridLayout->addWidget(B, 4, 1, 1, 1);

        less = new QPushButton(layoutWidget);
        less->setObjectName(QStringLiteral("less"));

        gridLayout->addWidget(less, 3, 3, 1, 1);

        null1 = new QPushButton(layoutWidget);
        null1->setObjectName(QStringLiteral("null1"));

        gridLayout->addWidget(null1, 4, 3, 1, 1);

        num9 = new QPushButton(layoutWidget);
        num9->setObjectName(QStringLiteral("num9"));

        gridLayout->addWidget(num9, 3, 2, 1, 1);

        null2 = new QPushButton(layoutWidget);
        null2->setObjectName(QStringLiteral("null2"));

        gridLayout->addWidget(null2, 0, 3, 1, 1);

        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(10, 10, 241, 31));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 40, 241, 20));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 60, 241, 16));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 261, 23));
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
        sum->setText(QApplication::translate("MainWindow", "A+B", Q_NULLPTR));
        clear->setText(QApplication::translate("MainWindow", "C", Q_NULLPTR));
        diff->setText(QApplication::translate("MainWindow", "A-B", Q_NULLPTR));
        num2->setText(QApplication::translate("MainWindow", "2", Q_NULLPTR));
        num4->setText(QApplication::translate("MainWindow", "4", Q_NULLPTR));
        num3->setText(QApplication::translate("MainWindow", "3", Q_NULLPTR));
        x->setText(QApplication::translate("MainWindow", "x^", Q_NULLPTR));
        num1->setText(QApplication::translate("MainWindow", "1", Q_NULLPTR));
        num6->setText(QApplication::translate("MainWindow", "6", Q_NULLPTR));
        add->setText(QApplication::translate("MainWindow", "+", Q_NULLPTR));
        num7->setText(QApplication::translate("MainWindow", "7", Q_NULLPTR));
        num8->setText(QApplication::translate("MainWindow", "8", Q_NULLPTR));
        num5->setText(QApplication::translate("MainWindow", "5", Q_NULLPTR));
        A->setText(QApplication::translate("MainWindow", "A=", Q_NULLPTR));
        dot->setText(QApplication::translate("MainWindow", ".", Q_NULLPTR));
        B->setText(QApplication::translate("MainWindow", "B=", Q_NULLPTR));
        less->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        null1->setText(QString());
        num9->setText(QApplication::translate("MainWindow", "9", Q_NULLPTR));
        null2->setText(QString());
        label->setText(QApplication::translate("MainWindow", "A=", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "B=", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
