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
    QLabel * _head_label;
    QVBoxLayout *_mainLayout;

private slots:
    void slots_OnLoginClicked();
    void slots_OnRegisterClicked();
};

#endif // LOGINWIDGET_H
