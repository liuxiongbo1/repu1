#include "mywidget.h"

//QApplication应用程序类
//qt头文件没有.h
//头文件和类名一样
#include <QApplication>

int main(int argc, char *argv[])
{
    //有且只有一个应用程序类的对象
    QApplication a(argc, argv);
    //myWidget继承于Qwidget，QWidget是一个窗口基类
    //所以myWidget也是窗口类
    //w就是一个窗口
    myWidget w;
    w.show();
    //让程序一直执行，等待用户操作
    //等待事件的发生
    a.exec();
    return 0;
}
