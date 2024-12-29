

#include "qt.h"
#include "./ui_qt.h"
#ifndef REGIS_H
#include "regis.h"
#endif
QT::QT(QWidget *parent,QString s1, QString s2,QString s3)
    : QMainWindow(parent)
    , ui(new Ui::sign_in_widget)
{
    ui->setupUi(this);
    ui->account_line->setText(s1);
    ui->key_line->setText(s2);
    ui->key_line->setEchoMode(QLineEdit::Password);
    ui->ident_com->setCurrentText(s3);
}

QT::~QT()
{
    delete ui;
}

void QT::on_sign_in_btn_clicked(bool checked)
{
    auto  result = QMessageBox::information(NULL,"text","sign in successfully",QMessageBox::Yes|QMessageBox::No);
    QString accountinfo = ui->account_line->text();
    QString keyinfo = ui->key_line->text();
    int id = ui->ident_com->currentIndex();
    // qDebug()<<id <<"\n";

    if(id==0){
        // 订单者


    } else if(id == 1){
        // 商家


    } else {
        // 管理员


    }

    return;
}


void QT::on_account_line_editingFinished()
{
    QString tex = ui->account_line->text();
    if(!p(tex)){
        ui->w1->setText("格式错误, 由大小写英文字母<br>和数字组成");
    }
}






void QT::on_key_line_editingFinished()
{
    QString tex = ui->key_line->text();
    if(!p(tex)){
        ui->w2->setText("格式错误, 由大小写英文字母<br>和数字组成");
    }
}


void QT::on_account_line_textEdited(const QString &arg1)
{
    ui->w1->setText("");
}


void QT::on_key_line_textEdited(const QString &arg1)
{
      ui->w2->setText("");
}


void QT::on_regis_btn_clicked(bool checked)
{
    this->close();
    regis* son = new regis();
    son->show();
}


void QT::on_regis_btn_clicked()
{

}

