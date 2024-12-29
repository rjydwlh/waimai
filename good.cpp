#include "good.h"
#include "ui_good.h"

good::good(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::good)
{
    ui->setupUi(this);
}

good::~good()
{
    delete ui;
}
