#include "info_restaurant.h"
#include "ui_info_restaurant.h"
#ifndef GOOD_H
#include "good.h"
#endif
#include<cstring>
#include<string>
info_restaurant::info_restaurant(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::info_restaurant)
{
    ui->setupUi(this);
    ui->label_2->setText("我不吃牛肉");
    // good* list = new good();
    QWidget* t0 = new QWidget();
    QVBoxLayout* list = new QVBoxLayout(t0);

    for(int i = 1;i<=10;i++){
        QLabel* t1 = new QLabel();
        QLabel* t2 = new QLabel("牛肉     \n价格:\t10 RMB");
        t1->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/pic.png")));
        QHBoxLayout* t3 = new QHBoxLayout();
        t3->addWidget(t1);
        t3->addWidget(t2);
        list->addLayout(t3);
    }


    ui->scrollArea->setWidget(t0);
}

info_restaurant::~info_restaurant()
{
    delete ui;
}
