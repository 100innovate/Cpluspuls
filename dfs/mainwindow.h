#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    vector<vector<QWidget*>> allBox;
    vector<vector<QWidget*>> allLoad;
public:
    void DFS(int x,int y);
    void ShowaBoxRed(int x,int y);
    void ShowaBoxblack(int x,int y);
    void ShowaBoxyellow(int x,int y);
    void ShowaBoxsport(int x,int y);
    void ShowaBoxWhite(int x,int y);
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
