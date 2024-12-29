/********************************************************************************
** Form generated from reading UI file 'sales_log.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SALES_LOG_H
#define UI_SALES_LOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sales_log
{
public:
    QTableWidget *list;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QLabel *label_2;

    void setupUi(QWidget *sales_log)
    {
        if (sales_log->objectName().isEmpty())
            sales_log->setObjectName("sales_log");
        sales_log->resize(706, 468);
        list = new QTableWidget(sales_log);
        list->setObjectName("list");
        list->setGeometry(QRect(25, 131, 551, 311));
        list->setLineWidth(1);
        widget = new QWidget(sales_log);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(20, 20, 561, 81));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);


        horizontalLayout_2->addLayout(horizontalLayout);


        retranslateUi(sales_log);

        QMetaObject::connectSlotsByName(sales_log);
    } // setupUi

    void retranslateUi(QWidget *sales_log)
    {
        sales_log->setWindowTitle(QCoreApplication::translate("sales_log", "Form", nullptr));
        label->setText(QCoreApplication::translate("sales_log", "<html><head/><body><p><span style=\" font-size:20pt;\">\351\224\200\345\224\256\346\227\245\345\277\227</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("sales_log", "\346\220\234\347\264\242", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sales_log: public Ui_sales_log {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SALES_LOG_H
