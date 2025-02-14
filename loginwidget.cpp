#include "loginwidget.h"

LoginWidget::LoginWidget(QWidget *parent) : ElaWidget(parent)
{
    // 设置窗口的最大和最小尺寸
    this->setMaximumSize(QSize(300, 500));
    this->setMinimumSize(QSize(300, 500));
    // 设置头部图片
    QPixmap headerPixmap(":res/header.jpg");
    _head_label = new QLabel(this);
    _head_label->setPixmap(headerPixmap);
    _head_label->setScaledContents(false);



}

LoginWidget::~LoginWidget()
{

}

void LoginWidget::slots_OnLoginClicked()
{

}

void LoginWidget::slots_OnRegisterClicked()
{

}
