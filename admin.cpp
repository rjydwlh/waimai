#include "admin.h"
#include "ui_admin.h"
#ifndef INFO_RESTAURANT_H
#include "info_restaurant.h"
#endif
#ifndef SEARCH_RESTAURANT
#include "search_restaurant.h"
#endif
#ifndef SALES_LOG_CPP
#include "sales_log.h"
#endif
admin::admin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::admin)
{
    ui->setupUi(this);
}

admin::~admin()
{
    delete ui;
}

void admin::on_search_restaurant_clicked(bool checked)
{
    search_restaurant* data = new search_restaurant();
    data->show();

    this->show();
}


void admin::on_bussiness_list_clicked()
{
    sales_log* next = new sales_log();
    next->show();
}

