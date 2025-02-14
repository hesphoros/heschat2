#ifndef LOGINWIDGET_H
#define LOGINWIDGET_H

#include <QObject>
#include <ElaWidget.h>
#include <QWidget>
#include <ElaLineEdit.h>
#include <ElaPushButton.h>
#include <QPushButton>
#include <QLabel>
#include <QSpacerItem>
#include <QPixmap>
#include <QIcon>
#include <QHBoxLayout>
#include <QVBoxLayout>

class LoginWidget : public ElaWidget
{
    Q_OBJECT
public:
    explicit LoginWidget(QWidget *parent = nullptr);
    ~LoginWidget();

private:
    QLabel*         _head_label;
    QVBoxLayout*    _mainLayout;
    ElaLineEdit*    _user_linedit;
    ElaLineEdit*    _password_linedit;
    ElaPushButton*  _login_btn;
    ElaPushButton*  _register_btn;
    QWidget*        _head_widget;
    QVBoxLayout*    _head_layout;
    QHBoxLayout*    _user_layout;
    QHBoxLayout*    _password_layout;

    QHBoxLayout*    _forget_password_layout;
    QLabel*         _password_label;
    QLabel*         _user_label;
    QLabel*         _forget_passwordd_label;
    QHBoxLayout*    _button_layout;



private slots:
    void slots_OnLoginClicked();
    void slots_OnRegisterClicked();
};

#endif // LOGINWIDGET_H
