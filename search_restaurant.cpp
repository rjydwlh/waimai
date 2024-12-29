#include "search_restaurant.h"
#include "ui_search_restaurant.h"

search_restaurant::search_restaurant(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::search_restaurant)
{
    ui->setupUi(this);
}

search_restaurant::~search_restaurant()
{
    delete ui;
}

void search_restaurant::on_lineEdit_textEdited(const QString &arg1)
{
    ui->search1->setText("");
    // 清空文本框
}



void search_restaurant::on_search_btn_clicked()
{
    name = ui->search1->text();
    // 跳转到搜索结果
}


void search_restaurant::on_search1_textEdited(const QString &arg1)
{
    ui->search1->setText("");
}

