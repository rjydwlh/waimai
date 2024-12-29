/********************************************************************************
** Form generated from reading UI file 'info_restaurant.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFO_RESTAURANT_H
#define UI_INFO_RESTAURANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QScrollBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_info_restaurant
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QScrollBar *verticalScrollBar;

    void setupUi(QWidget *info_restaurant)
    {
        if (info_restaurant->objectName().isEmpty())
            info_restaurant->setObjectName("info_restaurant");
        info_restaurant->resize(729, 426);
        widget = new QWidget(info_restaurant);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(90, 40, 551, 351));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        horizontalLayout_2->addLayout(horizontalLayout);

        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");

        horizontalLayout_2->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout_2);

        scrollArea = new QScrollArea(widget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 547, 319));
        verticalScrollBar = new QScrollBar(scrollAreaWidgetContents);
        verticalScrollBar->setObjectName("verticalScrollBar");
        verticalScrollBar->setGeometry(QRect(530, 0, 21, 321));
        verticalScrollBar->setOrientation(Qt::Orientation::Vertical);
        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(info_restaurant);

        QMetaObject::connectSlotsByName(info_restaurant);
    } // setupUi

    void retranslateUi(QWidget *info_restaurant)
    {
        info_restaurant->setWindowTitle(QCoreApplication::translate("info_restaurant", "Form", nullptr));
        label->setText(QCoreApplication::translate("info_restaurant", "<html><head/><body><p><span style=\" font-size:14pt;\">\345\225\206\345\256\266\345\220\215\347\247\260:</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("info_restaurant", "<html><head/><body><p><span style=\" font-size:14pt;\">\346\227\240\345\220\215\345\255\227</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class info_restaurant: public Ui_info_restaurant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFO_RESTAURANT_H
