#include "loginwidget.h"

LoginWidget::LoginWidget(QWidget *parent) : ElaWidget(parent)
{

    // 设置窗口的最大和最小尺寸
    this->setMaximumSize(QSize(300, 500));
    this->setMinimumSize(QSize(300, 500));

    // 创建布局
    _mainLayout = new QVBoxLayout(this);
    _mainLayout->setSpacing(7);
    _mainLayout->setContentsMargins(5, 5, 5, 5);

    // 设置头部图片
    QPixmap headerPixmap(":res/header.jpg");

    // 头部布局
    _head_widget = new QWidget(this);
    _head_layout = new QVBoxLayout(_head_widget);
    _head_label = new QLabel(_head_widget);
    _head_label->setPixmap(headerPixmap);
    _head_label->setAlignment(Qt::AlignCenter);
    _head_label->setScaledContents(false);
    _head_layout->addWidget(_head_label);
    _mainLayout->addWidget(_head_widget);

    // 用户输入框布局
    _user_layout = new QHBoxLayout();
    _user_linedit = new ElaLineEdit(this);
    _user_label = new QLabel("用户:", this);
    _user_layout->addWidget(_user_label);
    _user_layout->addWidget(_user_linedit);
    _mainLayout->addLayout(_user_layout);

    // 密码输入框布局
    _password_layout = new QHBoxLayout();
    _password_label = new QLabel("密码:", this);
    _password_linedit = new ElaLineEdit(this);
    _password_linedit->setEchoMode(QLineEdit::Password);
    _password_layout->addWidget(_password_label);
    _password_layout->addWidget(_password_linedit);
    _mainLayout->addLayout(_password_layout);

    // 忘记密码链接
    _forget_password_layout = new QHBoxLayout();
    _forget_passwordd_label = new QLabel("忘记密码", this);
    _forget_password_layout->addSpacerItem(new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Fixed));
    _forget_password_layout->addWidget(_forget_passwordd_label);
    _mainLayout->addLayout(_forget_password_layout);

    // 登录和注册按钮布局
    _button_layout = new QHBoxLayout();
    _login_btn = new ElaPushButton("Sign in", this);
    _register_btn = new ElaPushButton("Sign up", this);
    _button_layout->addSpacerItem(new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Fixed));
    _button_layout->addWidget(_login_btn);
    _button_layout->addWidget(_register_btn);
    _mainLayout->addLayout(_button_layout);

    // 设置最小尺寸


    _user_linedit->setMinimumHeight(30);
    // _user_linedit->setMaximumHeight(25);
    _password_linedit->setMinimumHeight(30);

    // 连接信号和槽
    connect(_login_btn, &ElaPushButton::clicked, this, &LoginWidget::slots_OnLoginClicked);
    connect(_register_btn, &ElaPushButton::clicked, this, &LoginWidget::slots_OnRegisterClicked);

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
