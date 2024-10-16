#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QStack>
#include <QKeyEvent>
#include <QMap>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QMap<int,QPushButton *> digitBTNs;
    QString operand;
    QString opcode;
    QStack<QString> operands;
    QStack<QString> opcodes;
    QString calculation(bool *ok=NULL);
    QString lastnum = NULL;
    QString lastcode = NULL;

private slots:
    void btnNumClicked();

    void binaryOperatorClicked();

    void on_btnPeriod_clicked();

    void on_btnDel_clicked();

    void on_btnClearAll_clicked();

    void on_btnEqual_clicked();

    void danOperatorClicked();


    void on_btnClear_clicked();

    virtual void keyPressEvent(QKeyEvent *event);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
