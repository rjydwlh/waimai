/********************************************************************************
** Form generated from reading UI file 'good.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOOD_H
#define UI_GOOD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_good
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *good)
    {
        if (good->objectName().isEmpty())
            good->setObjectName("good");
        good->resize(446, 494);
        widget = new QWidget(good);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(100, 70, 251, 364));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/pic.png")));

        horizontalLayout->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");

        horizontalLayout_3->addWidget(label_5);

        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/pic1.png")));

        horizontalLayout_3->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout_3);


        retranslateUi(good);

        QMetaObject::connectSlotsByName(good);
    } // setupUi

    void retranslateUi(QWidget *good)
    {
        good->setWindowTitle(QCoreApplication::translate("good", "Form", nullptr));
        label->setText(QCoreApplication::translate("good", "<html><head/><body><p><span style=\" font-size:20pt;\">\347\264\240\350\217\234</span></p></body></html>", nullptr));
        label_2->setText(QString());
        label_5->setText(QCoreApplication::translate("good", "<html><head/><body><p><span style=\" font-size:20pt;\">\347\202\222\350\202\211</span></p></body></html>", nullptr));
        label_6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class good: public Ui_good {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOOD_H
