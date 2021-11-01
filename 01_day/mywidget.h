#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>

class myWidget : public QWidget
{
    Q_OBJECT  //信号与槽的时候需要

public:
    //构造函数
    myWidget(QWidget *parent = 0);
    //析构函数
    ~myWidget();
};

#endif // MYWIDGET_H
