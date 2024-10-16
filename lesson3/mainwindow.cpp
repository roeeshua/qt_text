#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qdebug.h>
#include<QKeyEvent>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    digitBTNs = {{Qt::Key_0,ui->btnNum0},
        {Qt::Key_1,ui->btnNum1},
        {Qt::Key_2,ui->btnNum2},
        {Qt::Key_3,ui->btnNum3},
        {Qt::Key_4,ui->btnNum4},
        {Qt::Key_5,ui->btnNum5},
        {Qt::Key_6,ui->btnNum6},
        {Qt::Key_7,ui->btnNum7},
        {Qt::Key_8,ui->btnNum8},
        {Qt::Key_9,ui->btnNum9}
    };

    foreach(auto btn,digitBTNs)
        connect(btn,SIGNAL(clicked()),this,SLOT(btnNumClicked()));

    // connect(ui->btnNum0,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    // connect(ui->btnNum1,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    // connect(ui->btnNum2,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    // connect(ui->btnNum3,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    // connect(ui->btnNum4,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    // connect(ui->btnNum5,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    // connect(ui->btnNum6,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    // connect(ui->btnNum7,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    // connect(ui->btnNum8,SIGNAL(clicked()),this,SLOT(btnNumClicked()));
    // connect(ui->btnNum9,SIGNAL(clicked()),this,SLOT(btnNumClicked()));

    connect(ui->btnPlus,SIGNAL(clicked()),this,SLOT(binaryOperatorClicked()));
    connect(ui->btnMinus,SIGNAL(clicked()),this,SLOT(binaryOperatorClicked()));
    connect(ui->btnMultiple,SIGNAL(clicked()),this,SLOT(binaryOperatorClicked()));
    connect(ui->btnDivide,SIGNAL(clicked()),this,SLOT(binaryOperatorClicked()));

    connect(ui->btnDaoShu,SIGNAL(clicked()),this,SLOT(danOperatorClicked()));
    connect(ui->btnSquare,SIGNAL(clicked()),this,SLOT(danOperatorClicked()));
    connect(ui->btnSqrt,SIGNAL(clicked()),this,SLOT(danOperatorClicked()));
    connect(ui->btnPOM,SIGNAL(clicked()),this,SLOT(danOperatorClicked()));
    connect(ui->btnPercentage,SIGNAL(clicked()),this,SLOT(danOperatorClicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

QString MainWindow::calculation(bool *ok)
{
    double result=0;
    if(operands.size()==2 && opcodes.size()>0)
    {
        //取操作数
        double operand1=operands.front().toDouble();
        operands.pop_front();
        double operand2=operands.front().toDouble();
        operands.pop_front();
        lastnum=QString::number(operand2);

        //取操作符
        QString op=opcodes.front();
        opcodes.pop_front();
        lastcode=op;

        if(op=="+"){
            result= operand1+operand2;
        }else if(op=="-"){
            result= operand1-operand2;
        }else if(op=="×"){
            result= operand1*operand2;
        }else if(op=="÷"){
            result= operand1/operand2;
        }
        ui->statusbar->showMessage(QString("calculation is in progress:operands is %1,opcode is %2").arg(operands.size()).arg(opcodes.size()));
    }
    else
        ui->statusbar->showMessage(QString("operands is %1,opcode is %2").arg(operands.size()).arg(opcodes.size()));
    return QString::number(result);
}

void MainWindow::btnNumClicked()
{
    QString digit=qobject_cast<QPushButton*>(sender())->text();

    if(digit =="0"&& operand=="0")
        digit="";
    else if(digit !="0"&& operand=="0")
        operand="";

    operand += digit;

    ui->display->setText(operand);

    ui->statusbar->showMessage(qobject_cast<QPushButton*>(sender())->text()+"bin clicked");
}

void MainWindow::on_btnPeriod_clicked()
{
    if(!operand.contains("."))
        operand+=qobject_cast<QPushButton*>(sender())->text();
    ui->display->setText(operand);
}


void MainWindow::on_btnDel_clicked()
{
    operand =operand.left(operand.length()-1);
    ui->display->setText(operand);
}


void MainWindow::on_btnClearAll_clicked()
{
    operand.clear();
    ui->display->setText(operand);
    lastnum=NULL;
    lastcode=NULL;
    operands.clear();
    opcodes.clear();
}

void MainWindow::binaryOperatorClicked()
{
    ui->statusbar->showMessage("last operand"+operand);
    QString opcode=qobject_cast<QPushButton*>(sender())->text();

    qDebug()<<operands.size()<<" "<<opcodes.size();
    if(operands.size()==1 && opcodes.size() ==1)
    {
        operands.push_back(operand);
        QString result=calculation();
        ui->display->setText(result);
        operands.push_back(result);
        opcodes.push_back(opcode);
        operand = "";
        return;
    }

    if(operand !="")
    {
        operands.push_back(operand);
        operand="";

        opcodes.push_back(opcode);
    }
    else if(operand==""  && opcodes.size()==0){
        operands.push_back("0");
        opcodes.push_back(opcode);
    }
    else
        return;

    QString result=calculation();
    ui->display->setText(result);
}

void MainWindow::on_btnEqual_clicked()
{
    if(operands.size()==0&&opcodes.size()==0&&!lastnum.isNull()&&!lastcode.isNull())
    {
        double num=operand.toDouble();
        double num2=lastnum.toDouble();
        double x=0;
        if(lastcode=="+"){
            x= num+num2;
        }else if(lastcode=="-"){
            x= num-num2;
        }else if(lastcode=="×"){
            x= num*num2;
        }else if(lastcode=="÷"){
            x= num/num2;
        }
        QString result=QString::number(x);
        ui->display->setText(result);
        operand=result;
    }
    else
    {
        if(operand !="" && opcodes.size()>0)
        {
            operands.push_back(operand);
            operand="";
        }
        else if(opcodes.size()==0)
        {
            return;
        }

        QString result=calculation();
        ui->display->setText(result);
        operand=result;
    }
}

void MainWindow::danOperatorClicked()//单运算符函数
{
    double result=operand.toDouble();
    QString danopcode=qobject_cast<QPushButton*>(sender())->text();
    if(danopcode=="%"){
        result/=100;
    }else if(danopcode=="x²"){
        result=result*result;
    }else if(danopcode=="√x"){
        result=sqrt(result);
    }else if(danopcode=="1/x"){
        result=1/result;
    }else if(danopcode=="+/-"){
        result=-result;
    }
    operand=QString::number(result);
    ui->display->setText(operand);
}


void MainWindow::on_btnClear_clicked()
{
    operand.clear();
    ui->display->setText(operand);
}

void MainWindow::keyPressEvent(QKeyEvent *event)
{
    foreach (auto btnKey, digitBTNs.keys()) {
        if(event->key()==btnKey)
            digitBTNs[btnKey]->animateClick();
    }
    if(event->key()==Qt::Key_Backspace){
        ui->btnDel->animateClick();
    }else if(event->key()==Qt::Key_Plus){
        ui->btnPlus->animateClick();
    }else if(event->key()==Qt::Key_Minus){
        ui->btnMinus->animateClick();
    }else if(event->key()==Qt::Key_Asterisk){
        ui->btnMultiple->animateClick();
    }else if(event->key()==Qt::Key_Slash){
        ui->btnDivide->animateClick();
    }else if(event->key()==Qt::Key_Equal){
        ui->btnEqual->animateClick();
    }else if(event->key()==Qt::Key_Period){
        ui->btnPeriod->animateClick();
    }else if(event->key()==Qt::Key_Percent){
        ui->btnPercentage->animateClick();
    }
}


