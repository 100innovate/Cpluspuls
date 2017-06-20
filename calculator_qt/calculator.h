#ifndef CALCULATOR_H
#define CALCULATOR_H

#include"calculator.h"
#include"stack.h"
#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QtWidgets>
#include <iostream>
#include <cmath>
#include <QString>
#include <cstdlib>
#include <string>

using namespace std;

class calculator : public QWidget
{
    Q_OBJECT
private:
    QString str1;
    QString str2;

    QLineEdit *display1;
    QLineEdit *display2;

    LinkStack<double>m_numStack;
    LinkStack<string>m_strStack;

    void compute();
    void calculate(string &);
    const double Getnum();
    const string Getchar();
    void GetnumCIN(char *& exp);
    string GetcharCIN(char *& exp);

    int left;
private slots:
    void click_num(int);
    void click_1();
    void click_2();
    void click_3();
    void click_4();
    void click_5();
    void click_6();
    void click_7();
    void click_8();
    void click_9();
    void click_0();
    void click_plus();
    void click_minus();
    void click_multiply();
    void click_divide();
    void click_dot();
    void click_sin();
    void click_cos();
    void click_log();
    void click_sqrt();
    void click_sqr();
    void click_pow();
    void click_left();
    void click_right();
    void click_clear();
    void click_equal();
public:
    calculator(QWidget *parent = 0);
    ~calculator();
};


#endif // CALCULATOR_H
