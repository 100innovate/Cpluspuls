#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <sstream>
#include <QWidget>
#include <time.h>
#include <windows.h>

int N;
int M;
int cnt;
vector<vector<char>>m_map;
int fx[8] = { -1,0,0,1,1,0,0,-1 };

void MainWindow::DFS(int x,int y)
{
    int nextx, nexty;
    int i, j;

    m_map[x][y] = '*'; //先把当前格设为已访问过
    for (i = 0; i<8; i = i + 2) //按照上右下左的顺序，朝四个方向尝试
    {
        nextx = x + fx[i];
        nexty = y + fx[i + 1];
        if (nextx<0 || nextx >= N || nexty<0 || nexty >= M || m_map[nextx][nexty] != '.')
            continue; //满足以上任一个条件，则说明此路不通，换方向再试试吧
        ShowaBoxsport(nextx,nexty);
        cnt++; //如果到达这里，则说明此处也是黑瓷砖，计数加1，并启动新的搜索
        DFS(nextx, nexty);
    }
}

void MainWindow::ShowaBoxRed(int x,int y)
{
    allBox[x][y]->setStyleSheet("background:#FF3030;");
}

void MainWindow::ShowaBoxblack(int x, int y)
{
    allBox[x][y]->setStyleSheet("background:#000000;");
}

void MainWindow::ShowaBoxyellow(int x, int y)
{
    allBox[x][y]->setStyleSheet("background:#EEEE00;");
}

void MainWindow::ShowaBoxsport(int x, int y)
{
    allLoad[x][y]->setStyleSheet("background:#C0FF3E;");
    QApplication::processEvents();
    Sleep(100);
    allLoad[x][y]->setStyleSheet("background: rgba(0%,0%,0%,0%)");
    QApplication::processEvents();
}

void MainWindow::ShowaBoxWhite(int x, int y)
{
    allBox[x][y]->setStyleSheet("background:#FFFFFF;");
}

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    allBox.resize(15);
    for(int i(0);i<15;i++){
        allBox[i].resize(15);
    }

    for(int i(0);i<15;i++){
        for(int j(0);j<15;j++){
            QWidget *bbb=new QWidget(this);
            bbb->setGeometry(100+i*40,100+j*35,40,35);
            bbb->setStyleSheet("background:#FFFFFF;");
            allBox[i][j]=bbb;
        }
    }

    allLoad.resize(15);
    for(int i(0);i<15;i++){
        allLoad[i].resize(15);
    }

    for(int i(0);i<15;i++){
        for(int j(0);j<15;j++){
            QWidget *bbb=new QWidget(this);
            bbb->setGeometry(100+i*40,100+j*35,40,35);
            bbb->setStyleSheet("background: rgba(0%,0%,0%,0%)");
            allLoad[i][j]=bbb;
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    QString p=ui->textEdit->toPlainText();
    string pp=p.toStdString();
    stringstream ppp;
    ppp<<pp;

    for(int i(0);i<15;i++)
        for(int j(0);j<15;j++)
            ShowaBoxWhite(i,j);

    int i, j;
    int startx, starty; //开始位置，即@所在位置
    ppp >> M >> N;
    cnt = 1; //新开始，重新置1
    m_map.clear();
    m_map.resize(N);
    for (int i(0); i < m_map.size(); i++) {
        m_map[i].clear();
        m_map[i].resize(M);
    }
    for (i = 0; i<N; i++) //接收输入并找到起始位置
    {
        for (j = 0; j<M; j++)
        {
            ppp >> m_map[i][j];
            if (m_map[i][j] == '#')
            {
                ShowaBoxRed(i,j);
            }
            else if(m_map[i][j] == '.')
            {
                ShowaBoxblack(i,j);
            }
            if (m_map[i][j] == '@')
            {
                ShowaBoxyellow(i,j);
                startx = i;
                starty = j;
            }
        }
    }
    QApplication::processEvents();
    DFS(startx, starty); //启动深度搜索
    cout << cnt << endl;
}
