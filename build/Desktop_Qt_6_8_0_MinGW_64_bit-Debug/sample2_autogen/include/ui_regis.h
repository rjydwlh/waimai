/********************************************************************************
** Form generated from reading UI file 'regis.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGIS_H
#define UI_REGIS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_regis
{
public:
    QPushButton *btn_regis;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *warn1;
    QLabel *warn2;
    QLabel *warn3;
    QComboBox *ident_com_2;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLabel *label_2;

    void setupUi(QWidget *regis)
    {
        if (regis->objectName().isEmpty())
            regis->setObjectName("regis");
        regis->resize(400, 300);
        btn_regis = new QPushButton(regis);
        btn_regis->setObjectName("btn_regis");
        btn_regis->setGeometry(QRect(150, 240, 80, 18));
        label = new QLabel(regis);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 50, 31, 16));
        lineEdit = new QLineEdit(regis);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(95, 50, 151, 21));
        warn1 = new QLabel(regis);
        warn1->setObjectName("warn1");
        warn1->setGeometry(QRect(268, 38, 111, 51));
        warn2 = new QLabel(regis);
        warn2->setObjectName("warn2");
        warn2->setGeometry(QRect(220, 90, 101, 41));
        warn3 = new QLabel(regis);
        warn3->setObjectName("warn3");
        warn3->setGeometry(QRect(258, 136, 101, 31));
        warn3->setStyleSheet(QString::fromUtf8(""));
        ident_com_2 = new QComboBox(regis);
        ident_com_2->addItem(QString());
        ident_com_2->addItem(QString());
        ident_com_2->addItem(QString());
        ident_com_2->setObjectName("ident_com_2");
        ident_com_2->setGeometry(QRect(60, 180, 81, 22));
        lineEdit_2 = new QLineEdit(regis);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(100, 90, 91, 22));
        lineEdit_3 = new QLineEdit(regis);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(121, 140, 91, 22));
        label_3 = new QLabel(regis);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 140, 91, 21));
        label_2 = new QLabel(regis);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 90, 41, 20));

        retranslateUi(regis);

        QMetaObject::connectSlotsByName(regis);
    } // setupUi

    void retranslateUi(QWidget *regis)
    {
        regis->setWindowTitle(QCoreApplication::translate("regis", "Form", nullptr));
        btn_regis->setText(QCoreApplication::translate("regis", "\346\263\250\345\206\214", nullptr));
        label->setText(QCoreApplication::translate("regis", "\350\264\246\345\217\267:", nullptr));
        warn1->setText(QCoreApplication::translate("regis", "TextLabel", nullptr));
        warn2->setText(QCoreApplication::translate("regis", "TextLabel", nullptr));
        warn3->setText(QCoreApplication::translate("regis", "TextLabel", nullptr));
        ident_com_2->setItemText(0, QCoreApplication::translate("regis", "\350\256\242\345\215\225\350\200\205", nullptr));
        ident_com_2->setItemText(1, QCoreApplication::translate("regis", "\345\225\206\345\256\266", nullptr));
        ident_com_2->setItemText(2, QCoreApplication::translate("regis", "\347\256\241\347\220\206\345\221\230", nullptr));

        label_3->setText(QCoreApplication::translate("regis", "\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201:", nullptr));
        label_2->setText(QCoreApplication::translate("regis", "\345\257\206\347\240\201:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class regis: public Ui_regis {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGIS_H
