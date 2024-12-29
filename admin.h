#ifndef ADMIN_H
#define ADMIN_H

#include <QWidget>

namespace Ui {
class admin;
}

class admin : public QWidget
{
    Q_OBJECT

public:
    explicit admin(QWidget *parent = nullptr);
    ~admin();

private slots:
    void on_search_restaurant_clicked(bool checked);
    void on_bussiness_list_clicked();

private:
    Ui::admin *ui;
};

#endif // ADMIN_H
