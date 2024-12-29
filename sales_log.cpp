#include "sales_log.h"
#include "ui_sales_log.h"
#include<QTableWidget>
sales_log::sales_log(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::sales_log)
{
    ui->setupUi(this);
    // ui->list = new QTableWidget(10,3);
    ui->list->setRowCount(20);
    ui->list->setColumnCount(4);
    ui->list->setHorizontalHeaderLabels(QStringList()<<"商家图片"<<"商家"<<"成交金额"<<"时间");
    // ui->list->resize(700,900);
}

sales_log::~sales_log()
{
    delete ui;
}
