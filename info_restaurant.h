#ifndef INFO_RESTAURANT_H
#define INFO_RESTAURANT_H

#include <QWidget>

namespace Ui {
class info_restaurant;
}

class info_restaurant : public QWidget
{
    Q_OBJECT

public:
    explicit info_restaurant(QWidget *parent = nullptr);
    ~info_restaurant();

private:
    Ui::info_restaurant *ui;
};

#endif // INFO_RESTAURANT_H
