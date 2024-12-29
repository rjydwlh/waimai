#ifndef SALES_LOG_H
#define SALES_LOG_H

#include <QWidget>

namespace Ui {
class sales_log;
}

class sales_log : public QWidget
{
    Q_OBJECT

public:
    explicit sales_log(QWidget *parent = nullptr);
    ~sales_log();

private:
    Ui::sales_log *ui;
};

#endif // SALES_LOG_H
