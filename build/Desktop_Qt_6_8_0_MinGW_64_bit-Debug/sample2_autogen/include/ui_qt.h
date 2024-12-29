/********************************************************************************
** Form generated from reading UI file 'qt.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_H
#define UI_QT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sign_in_widget
{
public:
    QWidget *centralwidget;
    QLabel *w1;
    QLabel *w2;
    QPushButton *sign_in_btn;
    QPushButton *regis_btn;
    QComboBox *ident_com;
    QLineEdit *account_line;
    QLabel *account_label;
    QLabel *key_label;
    QLineEdit *key_line;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *sign_in_widget)
    {
        if (sign_in_widget->objectName().isEmpty())
            sign_in_widget->setObjectName("sign_in_widget");
        sign_in_widget->resize(584, 361);
        centralwidget = new QWidget(sign_in_widget);
        centralwidget->setObjectName("centralwidget");
        w1 = new QLabel(centralwidget);
        w1->setObjectName("w1");
        w1->setGeometry(QRect(320, 70, 194, 41));
        w2 = new QLabel(centralwidget);
        w2->setObjectName("w2");
        w2->setGeometry(QRect(340, 120, 231, 41));
        sign_in_btn = new QPushButton(centralwidget);
        sign_in_btn->setObjectName("sign_in_btn");
        sign_in_btn->setGeometry(QRect(292, 231, 80, 18));
        regis_btn = new QPushButton(centralwidget);
        regis_btn->setObjectName("regis_btn");
        regis_btn->setGeometry(QRect(193, 231, 80, 18));
        ident_com = new QComboBox(centralwidget);
        ident_com->addItem(QString());
        ident_com->addItem(QString());
        ident_com->addItem(QString());
        ident_com->setObjectName("ident_com");
        ident_com->setGeometry(QRect(133, 180, 81, 22));
        account_line = new QLineEdit(centralwidget);
        account_line->setObjectName("account_line");
        account_line->setGeometry(QRect(220, 80, 91, 22));
        account_label = new QLabel(centralwidget);
        account_label->setObjectName("account_label");
        account_label->setGeometry(QRect(175, 80, 41, 20));
        key_label = new QLabel(centralwidget);
        key_label->setObjectName("key_label");
        key_label->setGeometry(QRect(174, 130, 41, 20));
        key_line = new QLineEdit(centralwidget);
        key_line->setObjectName("key_line");
        key_line->setGeometry(QRect(219, 130, 91, 22));
        sign_in_widget->setCentralWidget(centralwidget);
        menubar = new QMenuBar(sign_in_widget);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 584, 17));
        sign_in_widget->setMenuBar(menubar);
        statusbar = new QStatusBar(sign_in_widget);
        statusbar->setObjectName("statusbar");
        sign_in_widget->setStatusBar(statusbar);

        retranslateUi(sign_in_widget);

        QMetaObject::connectSlotsByName(sign_in_widget);
    } // setupUi

    void retranslateUi(QMainWindow *sign_in_widget)
    {
        sign_in_widget->setWindowTitle(QCoreApplication::translate("sign_in_widget", "QT", nullptr));
        w1->setText(QString());
        w2->setText(QString());
        sign_in_btn->setText(QCoreApplication::translate("sign_in_widget", "sign in", nullptr));
        regis_btn->setText(QCoreApplication::translate("sign_in_widget", "register", nullptr));
        ident_com->setItemText(0, QCoreApplication::translate("sign_in_widget", "\350\256\242\345\215\225\350\200\205", nullptr));
        ident_com->setItemText(1, QCoreApplication::translate("sign_in_widget", "\345\225\206\345\256\266", nullptr));
        ident_com->setItemText(2, QCoreApplication::translate("sign_in_widget", "\347\256\241\347\220\206\345\221\230", nullptr));

        account_label->setText(QCoreApplication::translate("sign_in_widget", "\350\264\246\345\217\267:", nullptr));
        key_label->setText(QCoreApplication::translate("sign_in_widget", "\345\257\206\347\240\201:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sign_in_widget: public Ui_sign_in_widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_H
