#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QString>
#include <bits/stdc++.h>

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QString Polynomial;
    bool dotclick;
private slots:
    void clicknum();
    void clear();
    void on_x_clicked();
    void on_diff_clicked();
    void on_sum_clicked();
    void on_A_clicked();
    void on_B_clicked();
    void on_diff_4_clicked();
    void on_add_clicked();
    void on_less_clicked();
    void on_dot_clicked();
};

#endif // MAINWINDOW_H
