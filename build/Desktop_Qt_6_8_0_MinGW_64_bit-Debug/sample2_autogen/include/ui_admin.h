/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QPushButton *search_restaurant;
    QPushButton *bussiness_list;

    void setupUi(QWidget *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName("admin");
        admin->resize(400, 300);
        search_restaurant = new QPushButton(admin);
        search_restaurant->setObjectName("search_restaurant");
        search_restaurant->setGeometry(QRect(20, 70, 141, 41));
        bussiness_list = new QPushButton(admin);
        bussiness_list->setObjectName("bussiness_list");
        bussiness_list->setGeometry(QRect(20, 130, 141, 41));

        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QWidget *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "Form", nullptr));
        search_restaurant->setText(QCoreApplication::translate("admin", "\346\237\245\347\234\213\345\225\206\345\256\266", nullptr));
        bussiness_list->setText(QCoreApplication::translate("admin", "\351\224\200\345\224\256\346\227\245\345\277\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
