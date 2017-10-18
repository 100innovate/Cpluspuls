#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    dotclick(true)
{
    ui->setupUi(this);
    connect(ui->num1,&QPushButton::clicked,this,&MainWindow::clicknum);
    connect(ui->num2,&QPushButton::clicked,this,&MainWindow::clicknum);
    connect(ui->num3,&QPushButton::clicked,this,&MainWindow::clicknum);
    connect(ui->num4,&QPushButton::clicked,this,&MainWindow::clicknum);
    connect(ui->num5,&QPushButton::clicked,this,&MainWindow::clicknum);
    connect(ui->num6,&QPushButton::clicked,this,&MainWindow::clicknum);
    connect(ui->num7,&QPushButton::clicked,this,&MainWindow::clicknum);
    connect(ui->num8,&QPushButton::clicked,this,&MainWindow::clicknum);
    connect(ui->num9,&QPushButton::clicked,this,&MainWindow::clicknum);

    connect(ui->clear,&QPushButton::clicked,this,&MainWindow::clear);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::clicknum()
{
    QPushButton *value=(QPushButton*)sender();
    Polynomial+=value->text();
    ui->textBrowser->setText(Polynomial);
}

void MainWindow::clear()
{
    Polynomial.clear();
    ui->textBrowser->setText(Polynomial);
}

void MainWindow::on_dot_clicked()
{
    if(Polynomial.length()==0){
        Polynomial+="0.";
        ui->textBrowser->setText(Polynomial);
        dotclick=false;
        return;
    }
    if(dotclick==true){
        if(Polynomial[Polynomial.length()-1]>='0'&&Polynomial[Polynomial.length()-1]<='9'){
            Polynomial+='.';
            ui->textBrowser->setText(Polynomial);
        }else{
            Polynomial+="0.";
            ui->textBrowser->setText(Polynomial);
        }
        dotclick=false;
    }
}

void MainWindow::on_diff_clicked()
{

}

void MainWindow::on_sum_clicked()
{

}

void MainWindow::on_x_clicked()
{
    if(Polynomial.length()==0){
        Polynomial+="x^";
        ui->textBrowser->setText(Polynomial);
        dotclick=true;
        return;
    }
    if(Polynomial[Polynomial.length()-1]!='-'&&Polynomial[Polynomial.length()-1]!='^'){
        Polynomial+="x^";
        ui->textBrowser->setText(Polynomial);
        dotclick=true;
    }
}

void MainWindow::on_add_clicked()
{
    if(Polynomial[Polynomial.length()-1]!='-'&&Polynomial[Polynomial.length()-1]!='^'&&Polynomial[Polynomial.length()-1]!='+'){
        Polynomial+="+";
        ui->textBrowser->setText(Polynomial);
        dotclick=true;
    }
}

void MainWindow::on_less_clicked()
{
    if(Polynomial[Polynomial.length()-1]!='+'&&Polynomial[Polynomial.length()-1]!='-'){
        Polynomial+="-";
        ui->textBrowser->setText(Polynomial);
        dotclick=true;
    }
}

void MainWindow::on_A_clicked()
{

}

void MainWindow::on_B_clicked()
{

}
