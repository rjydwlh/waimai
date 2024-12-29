/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_register
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *account_1;
    QLabel *warn1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *key1;
    QLabel *warn2;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *key2;
    QLabel *warn1_2;

    void setupUi(QWidget *register)
    {
        if (register->objectName().isEmpty())
            register->setObjectName("register");
        register->resize(400, 300);
        widget = new QWidget(register);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(50, 80, 287, 97));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        account_1 = new QLineEdit(widget);
        account_1->setObjectName("account_1");

        horizontalLayout->addWidget(account_1);

        warn1 = new QLabel(widget);
        warn1->setObjectName("warn1");

        horizontalLayout->addWidget(warn1);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);

        key1 = new QLineEdit(widget);
        key1->setObjectName("key1");

        horizontalLayout_2->addWidget(key1);

        warn2 = new QLabel(widget);
        warn2->setObjectName("warn2");

        horizontalLayout_2->addWidget(warn2);


        verticalLayout->addLayout(horizontalLayout_2);

        widget1 = new QWidget(register);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(50, 170, 305, 26));
        horizontalLayout_4 = new QHBoxLayout(widget1);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_3 = new QLabel(widget1);
        label_3->setObjectName("label_3");

        horizontalLayout_3->addWidget(label_3);

        key2 = new QLineEdit(widget1);
        key2->setObjectName("key2");

        horizontalLayout_3->addWidget(key2);


        horizontalLayout_4->addLayout(horizontalLayout_3);

        warn1_2 = new QLabel(widget1);
        warn1_2->setObjectName("warn1_2");

        horizontalLayout_4->addWidget(warn1_2);


        retranslateUi(register);

        QMetaObject::connectSlotsByName(register);
    } // setupUi

    void retranslateUi(QWidget *register)
    {
        register->setWindowTitle(QCoreApplication::translate("register", "Form", nullptr));
        label->setText(QCoreApplication::translate("register", "\350\257\267\350\276\223\345\205\245\350\264\246\346\210\267:", nullptr));
        warn1->setText(QCoreApplication::translate("register", "\346\240\274\345\274\217\351\224\231\350\257\257, \345\217\252\345\205\201\350\256\270\345\244\247\345\260\217\345\206\231\345\255\227\346\257\215<br>\345\222\214\346\225\260\345\255\227", nullptr));
        label_2->setText(QCoreApplication::translate("register", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201:", nullptr));
        warn2->setText(QCoreApplication::translate("register", "\346\240\274\345\274\217\351\224\231\350\257\257, \345\217\252\345\205\201\350\256\270\345\244\247\345\260\217\345\206\231\345\255\227\346\257\215<br>\345\222\214\346\225\260\345\255\227", nullptr));
        label_3->setText(QCoreApplication::translate("register", "\350\257\267\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201:", nullptr));
        warn1_2->setText(QCoreApplication::translate("register", "\344\270\244\346\254\241\345\257\206\347\240\201\344\270\215\345\220\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class register: public Ui_register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
