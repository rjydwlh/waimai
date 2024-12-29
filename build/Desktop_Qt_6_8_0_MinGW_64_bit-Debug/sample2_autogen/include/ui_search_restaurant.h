/********************************************************************************
** Form generated from reading UI file 'search_restaurant.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCH_RESTAURANT_H
#define UI_SEARCH_RESTAURANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_search_restaurant
{
public:
    QPushButton *search_btn;
    QLineEdit *search1;

    void setupUi(QWidget *search_restaurant)
    {
        if (search_restaurant->objectName().isEmpty())
            search_restaurant->setObjectName("search_restaurant");
        search_restaurant->resize(551, 352);
        search_btn = new QPushButton(search_restaurant);
        search_btn->setObjectName("search_btn");
        search_btn->setGeometry(QRect(389, 30, 51, 21));
        search1 = new QLineEdit(search_restaurant);
        search1->setObjectName("search1");
        search1->setGeometry(QRect(160, 30, 221, 21));

        retranslateUi(search_restaurant);

        QMetaObject::connectSlotsByName(search_restaurant);
    } // setupUi

    void retranslateUi(QWidget *search_restaurant)
    {
        search_restaurant->setWindowTitle(QCoreApplication::translate("search_restaurant", "Form", nullptr));
        search_btn->setText(QCoreApplication::translate("search_restaurant", "\346\220\234\347\264\242", nullptr));
        search1->setText(QCoreApplication::translate("search_restaurant", "\350\257\267\350\276\223\345\205\245\345\225\206\345\256\266\345\220\215\347\247\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class search_restaurant: public Ui_search_restaurant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCH_RESTAURANT_H
