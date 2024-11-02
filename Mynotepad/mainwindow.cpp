#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    statusLabel.setMaximumWidth(150);
    statusLabel.setText("length:"+QString::number(0)+"   lines:"+QString::number(1));
    ui->statusBar->addPermanentWidget(&statusLabel);

    statusCursorLabel.setMaximumWidth(150);
    statusCursorLabel.setText("Ln:"+QString::number(0)+"   Col:"+QString::number(1));
    ui->statusBar->addPermanentWidget(&statusCursorLabel);

    QLabel *auther=new QLabel(ui->statusBar);
    auther->setText("黄展鸿");
    ui->statusBar->addPermanentWidget(auther);
}

MainWindow::~MainWindow()
{
    delete ui;
}
