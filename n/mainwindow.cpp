#include "mainwindow.h"
#include "ui_mainwindow.h"

#include<bits\stdc++.h>
#include<QString>
#include"doublelink.h"

using namespace std;

QString outofN(int n) {
    QString out;
    DoubleLink<int> x;
    x.push(1);
    for (int i(1); i <= n; i++) {
        for (auto j(x.GetTop()); j != nullptr; j = j->m_Llink) {
            j->m_info *= i;
        }
        for (auto j(x.GetBottom()); j != nullptr; j = j->m_Rlink) {
            if (j->m_info > 999) {
                int q = j->m_info / 1000;
                j->m_info = j->m_info % 1000;
                if (j->m_Rlink == nullptr)x.push(q);
                else j->m_Rlink->m_info += q;
            }
        }
    }

    for (auto j(x.GetTop()); j != nullptr; j = j->m_Llink) {
        if (j != x.GetTop()) {
            if (j->m_info < 10)out+= "00";
            else if (j->m_info < 100)out+= "0";
        }
        if (j->m_Llink != nullptr){
            out+=QString::number(j->m_info);
            out+=',';
            //cout << j->m_info << ',';
        }
        else out+=QString::number(j->m_info);
    }
    return out;
}


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    int n=ui->textEdit->toPlainText().toInt();
    ui->textBrowser->setText(outofN(n));
}
