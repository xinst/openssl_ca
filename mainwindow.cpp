#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setFixedSize(722,481);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//证书请求文件按钮事件
void MainWindow::on_pushButton_clicked()
{
    //执行请求文件
    careq();
    //写入message
    showMessage();
}

//导入待验证证书


//验证证书

void MainWindow::on_pushButton_7_clicked()
{
    userCerUrl = QFileDialog::getOpenFileName(this,"select file","./",NULL);
}