#ifndef HEADFILE_H
#define HEADFILE_H

#include<iostream>
#include<string>
using namespace std;

double putin();
double add(double&a, double&b); //加
double reduce(double&a, double&b); //减
double multi(double&a, double&b); //乘
double div(double&a, double&b); //除
double Calculate(double&a, double&b, char&op); // 运算符作为字符数读入

#endif