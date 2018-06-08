#include "square1.h"
#include "ui_square1.h"

square1::square1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::square1)
{
    ui->setupUi(this);
    this->setFixedSize(600,150);
    this->setStyleSheet("background-color: #ad9258");
    ui->doubleSpinBox->setDecimals(3);
    ui->doubleSpinBox_2->setDecimals(3);
}

square1::~square1()
{
    delete ui;
}

void square1::on_toolButton_pressed()
{
    double re1, n1, n2;
    n1 = ui->doubleSpinBox->value();
    n2 = ui->doubleSpinBox_2->value();
    re1 = qPow(n1,n2);
    ui->lcdNumber->display(re1);
}
