#pragma once
#ifndef QT_H
#define QT_H


#include <QMainWindow>
#include<QHBoxLayout>
#include<QPushButton>
#include<QLabel>
#include<QMessageBox>


QT_BEGIN_NAMESPACE
namespace Ui {
class sign_in_widget;
}
QT_END_NAMESPACE

bool p(QString Tex);

class QT : public QMainWindow
{
    Q_OBJECT

public:
    QT(QWidget *parent = nullptr,QString s1="", QString s2="",QString id = "");
    ~QT();

private slots:
    void on_sign_in_btn_clicked(bool checked);
    void on_account_line_editingFinished();

    void on_key_line_editingFinished();

    void on_account_line_textEdited(const QString &arg1);

    void on_key_line_textEdited(const QString &arg1);

    void on_regis_btn_clicked(bool checked);

    void on_regis_btn_clicked();

private:
    Ui::sign_in_widget *ui;
    // bool p(QString Tex);
};




#endif // QT_H


