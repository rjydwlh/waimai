#include "widget.h"//包含头文件 我们自定义的类的头文件 类名和头文件名要保持一致

#include <QApplication>//应用程序头文件

int main(int argc, char *argv[])//main函数

{
    QApplication a(argc, argv);//自定义程序对象 并把命令行参数给应用程序对象

    Widget w;//创建窗口对象
    w.show();//显示窗口





    return a.exec();//消息循环
}
