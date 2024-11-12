#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "aboutdialog.h"
#include "searchdialog.h"
#include "replacedialog.h"
#include "QFileDialog.h"
#include "QColorDialog.h"
#include <QMessageBox>
#include <QTextStream>
#include "QFontDialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    textchanged = false;
    on_actionNew_triggered();

    statusLabel.setMaximumWidth(150);
    statusLabel.setText("length:"+QString::number(0)+"   lines:"+QString::number(1));
    ui->statusBar->addPermanentWidget(&statusLabel);

    statusCursorLabel.setMaximumWidth(150);
    statusCursorLabel.setText("Ln:"+QString::number(0)+"   Col:"+QString::number(1));
    ui->statusBar->addPermanentWidget(&statusCursorLabel);

    QLabel *auther=new QLabel(ui->statusBar);
    auther->setText("黄展鸿");
    ui->statusBar->addPermanentWidget(auther);

    ui->actionCopy->setEnabled(false);
    ui->actCut->setEnabled(false);
    ui->actionRedo->setEnabled(false);
    ui->actionUndo->setEnabled(false);
    ui->actionPaste->setEnabled(false);

    QPlainTextEdit::LineWrapMode mode=ui->TextEdit->lineWrapMode();

    if(mode==QPlainTextEdit::NoWrap){
        ui->TextEdit->setLineWrapMode(QPlainTextEdit::WidgetWidth);

        ui->actionUneWrap->setChecked(false);
    }else{
        ui->TextEdit->setLineWrapMode(QPlainTextEdit::NoWrap);

        ui->actionUneWrap->setChecked(true);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionAbout_triggered()
{
    AboutDialog dlg;
    dlg.exec();
}


void MainWindow::on_actionFind_triggered()
{
    SearchDialog dlg;
    dlg.exec();
}


void MainWindow::on_actionReplace_triggered()
{
    ReplaceDialog dlg;
    dlg.exec();
}


void MainWindow::on_actionNew_triggered()
{
    if(!userEditConfirmed())
        return;

    filePath="";

    ui->TextEdit->clear();
    this->setWindowTitle(tr("新建文本文件 - 编辑器"));

    textchanged=false;
}


void MainWindow::on_actionOpen_triggered()
{
    if(!userEditConfirmed())
        return;

    QString filename =QFileDialog::getOpenFileName(this,"打开文件",".",tr("Text files (*.txt) ;; All (*.*)"));
    QFile file(filename);

    if(!file.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox::warning(this,"..","打开文件失败");
        return;
    }

    filePath=filename;

    QTextStream in(&file);
    QString text=in.readAll();
    ui->TextEdit->insertPlainText(text);
    file.close();

    this->setWindowTitle(QFileInfo(filename).absoluteFilePath());

    textchanged=false;
}


void MainWindow::on_actionSave_triggered()
{
    if(filePath==""){
        QString filename =QFileDialog::getSaveFileName(this,"保存文件",".",tr("Text files (*.txt)"));

        QFile file(filename);
        if(!file.open(QFile::WriteOnly | QFile::Text)){
            QMessageBox::warning(this,"..","打开保存文件失败");
            return;
        }
        file.close();
        filePath=filename;
    }

    QFile file(filePath);
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this,"..","打开保存文件失败");
        return;
    }
    QTextStream out (&file);
    QString text =ui->TextEdit->toPlainText();
    out<<text;
    file.flush();
    file.close();

    this->setWindowTitle(QFileInfo(filePath).absoluteFilePath());

    textchanged=false;
}


void MainWindow::on_actionSaveAs_triggered()
{
    QString filename =QFileDialog::getSaveFileName(this,"保存文件",".",tr("Text files (*.txt)"));

    QFile file(filename);
    if(!file.open(QFile::WriteOnly | QFile::Text)){
        QMessageBox::warning(this,"..","打开保存文件失败");
        return;
    }

    filePath=filename;
    QTextStream out (&file);
    QString text =ui->TextEdit->toPlainText();
    out<<text;
    file.flush();
    file.close();

    this->setWindowTitle(QFileInfo(filePath).absoluteFilePath());
}


void MainWindow::on_TextEdit_textChanged()
{
    if(!textchanged){
        this->setWindowTitle("*"+this->windowTitle());
        textchanged =true;
    }
}

bool MainWindow::userEditConfirmed()
{
    if(textchanged){

        QString path = (filePath!="")?filePath:"无标题.txt";
        QMessageBox msg(this);
        msg.setIcon(QMessageBox::Question);
        msg.setWindowTitle("...");
        msg.setWindowFlag(Qt::Drawer);
        msg.setText(QString("是否将更改保存到\n")+"\""+path+"\"?");
        msg.setStandardButtons(QMessageBox::Yes|QMessageBox::No|QMessageBox::Cancel);
        int r = msg.exec();
        switch(r){
        case QMessageBox::Yes:
            on_actionSave_triggered();
            break;
        case QMessageBox::No:
            textchanged=false;
            break;
        case QMessageBox::Cancel:
            return false;
        }
    }
    return true;
}

void MainWindow::on_actionUndo_triggered()
{
    ui->TextEdit->undo();
}

void MainWindow::on_actCut_triggered()
{
    ui->TextEdit->cut();
    ui->actionPaste->setEnabled(true);
}


void MainWindow::on_actionCopy_triggered()
{
    ui->TextEdit->copy();
    ui->actionPaste->setEnabled(true);
}

void MainWindow::on_actionPaste_triggered()
{
    ui->TextEdit->paste();
}


void MainWindow::on_actionRedo_triggered()
{
    ui->TextEdit->redo();
}


void MainWindow::on_TextEdit_copyAvailable(bool b)
{
    ui->actionCopy->setEnabled(b);
    ui->actCut->setEnabled(b);
}


void MainWindow::on_TextEdit_redoAvailable(bool b)
{
     ui->actionRedo->setEnabled(b);
}


void MainWindow::on_TextEdit_undoAvailable(bool b)
{
    ui->actionUndo->setEnabled(b);
}


void MainWindow::on_actionFontColor_triggered()
{
    QColor fcolor =QColorDialog::getColor(Qt::black,this,"设置字体颜色");
    if(fcolor.isValid()){
        ui->TextEdit->setStyleSheet(QString("QPlainTextEdit {color: %1}").arg(fcolor.name()));
    }
}


void MainWindow::on_actionEditorBackground_triggered()
{
    QColor bcolor =QColorDialog::getColor(Qt::black,this,"设置背景颜色");
    if(bcolor.isValid()){
        ui->TextEdit->setStyleSheet(QString("QPlainTextEdit {background-color: %1}").arg(bcolor.name()));
    }
}

void MainWindow::on_actionUneWrap_triggered()
{
    QPlainTextEdit::LineWrapMode mode=ui->TextEdit->lineWrapMode();

    if(mode==QPlainTextEdit::NoWrap){
        ui->TextEdit->setLineWrapMode(QPlainTextEdit::WidgetWidth);

        ui->actionUneWrap->setChecked(true);
    }else{
        ui->TextEdit->setLineWrapMode(QPlainTextEdit::NoWrap);

        ui->actionUneWrap->setChecked(false);
    }
}


void MainWindow::on_actionFont_triggered()
{
    bool ok=false;
    QFont font=QFontDialog::getFont(&ok,this);

    if(ok){
        ui->TextEdit->setFont(font);
    }
}

