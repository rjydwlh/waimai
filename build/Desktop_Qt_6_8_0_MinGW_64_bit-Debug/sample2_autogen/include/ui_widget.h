/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLabel *label;
    QPushButton *ButtonToCh;
    QPushButton *ButtonToDi;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 511, 61));
        ButtonToCh = new QPushButton(Widget);
        ButtonToCh->setObjectName("ButtonToCh");
        ButtonToCh->setGeometry(QRect(10, 130, 401, 101));
        ButtonToDi = new QPushButton(Widget);
        ButtonToDi->setObjectName("ButtonToDi");
        ButtonToDi->setGeometry(QRect(10, 250, 401, 101));
        label_3 = new QLabel(Widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 90, 251, 31));
        label_4 = new QLabel(Widget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 380, 741, 41));
        label_2 = new QLabel(Widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(470, 130, 181, 221));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/new/prefix1/1112 184511.png")));
        label_2->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:36pt;\">\346\254\242\350\277\216\346\235\245\345\210\260\345\225\206\345\256\266\344\270\252\344\272\272\347\225\214\351\235\242\357\274\201</span></p></body></html>", nullptr));
        ButtonToCh->setText(QCoreApplication::translate("Widget", "\346\210\221 \347\232\204 \345\225\206 \345\223\201", nullptr));
        ButtonToDi->setText(QCoreApplication::translate("Widget", "\346\210\221 \347\232\204 \350\256\242 \345\215\225", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:16pt;\">//\350\277\231\351\207\214\346\230\257\345\225\206\345\256\266\345\220\215\347\247\260</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:18pt;\">//\350\277\231\351\207\214\346\230\257\345\225\206\345\256\266\344\277\241\346\201\257\347\256\200\344\273\213\350\277\231\351\207\214\346\230\257\345\225\206\345\256\266\344\277\241\346\201\257\347\256\200\344\273\213\350\277\231\351\207\214\346\230\257\345\225\206\345\256\266\344\277\241\346\201\257\347\256\200\344\273\213</span></p></body></html>", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
