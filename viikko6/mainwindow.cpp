#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->N0,SIGNAL(clicked(bool)),this,SLOT(handleN0()));
    connect(ui->N1,SIGNAL(clicked(bool)),this,SLOT(handleN1()));
    connect(ui->N2,SIGNAL(clicked(bool)),this,SLOT(handleN2()));
    connect(ui->N3,SIGNAL(clicked(bool)),this,SLOT(handleN3()));
    connect(ui->N4,SIGNAL(clicked(bool)),this,SLOT(handleN4()));
    connect(ui->N5,SIGNAL(clicked(bool)),this,SLOT(handleN5()));
    connect(ui->N6,SIGNAL(clicked(bool)),this,SLOT(handleN6()));
    connect(ui->N7,SIGNAL(clicked(bool)),this,SLOT(handleN7()));
    connect(ui->N8,SIGNAL(clicked(bool)),this,SLOT(handleN8()));
    connect(ui->N9,SIGNAL(clicked(bool)),this,SLOT(handleN9()));
    connect(ui->clear,SIGNAL(clicked(bool)),this,SLOT(handleClear()));
    connect(ui->enter,SIGNAL(clicked(bool)),this,SLOT(handleEnter()));
    connect(ui->add,SIGNAL(clicked(bool)),this,SLOT(handleAdd()));
    connect(ui->sub,SIGNAL(clicked(bool)),this,SLOT(handleSub()));
    connect(ui->mul,SIGNAL(clicked(bool)),this,SLOT(handleMul()));
    connect(ui->div,SIGNAL(clicked(bool)),this,SLOT(handleDiv()));

    number1 = "";
    number2 = "";
    state = 0;
    result = 0.0f;
    operand = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleN0()
{
    numberClickedHandler();
}

void MainWindow::handleN1()
{
    numberClickedHandler();
}

void MainWindow::handleN2()
{
    numberClickedHandler();
}

void MainWindow::handleN3()
{
    numberClickedHandler();
}

void MainWindow::handleN4()
{
    numberClickedHandler();
}

void MainWindow::handleN5()
{
    numberClickedHandler();
}

void MainWindow::handleN6()
{
    numberClickedHandler();
}

void MainWindow::handleN7()
{
    numberClickedHandler();
}

void MainWindow::handleN8()
{
    numberClickedHandler();
}

void MainWindow::handleN9()
{
    numberClickedHandler();
}

void MainWindow::handleClear()
{
    number1.clear();
    number2.clear();
    result = 0.0f;
    state = 0;
    operand = 0;
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();

}

void MainWindow::handleEnter()
{
    if (state == 0 && !number1.isEmpty())
    {
        state = 1;
    } else if (state == 1 && !number2.isEmpty())
    {
        float num1 = number1.toFloat();
        float num2 = number2.toFloat();
        switch(operand)
        {
        case 1:
            result = num1 + num2;
            break;
        case 2:
            result = num1 - num2;
            break;
        case 3:
            result = num1 * num2;
            break;
        case 4:
            if(num2 != 0)
            {
            result = num1 / num2;
            }else
            {
            }
            break;
        default:
            break;
        }

    ui->result->setText(QString::number(result));
    number1 = QString::number(result);
    number2.clear();
    state = 0;
    }
}

void MainWindow::handleAdd()
{
    operand = 1;
}

void MainWindow::handleSub()
{
    operand = 2;
}

void MainWindow::handleMul()
{
    operand = 3;
}

void MainWindow::handleDiv()
{
    operand = 4;
}

void MainWindow::numberClickedHandler()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();
    QString digit = name.right(1);
    qDebug() << "Button name:" << name;

    if (state == 0)
    {
        number1 += digit;
        ui->num1->setText(number1);
    }else if (state == 1)
    {
        number2 += digit;
        ui->num2->setText(number2);
    }

}



