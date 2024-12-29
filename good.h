#ifndef GOOD_H
#define GOOD_H

#include <QWidget>

namespace Ui {
class good;
}

class good : public QWidget
{
    Q_OBJECT

public:
    explicit good(QWidget *parent = nullptr);
    ~good();

private:
    Ui::good *ui;
};

#endif // GOOD_H
