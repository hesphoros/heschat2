#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QObject>
#include <QWidget>
#include <ElaWidget.h>
#include <ElaWindow.h>
#include <QLabel>
#include <ElaAppBar.h>
#include <QMainWindow>
#include <QSize>
#include "loginwidget.h"

class MainWindow : public ElaWindow
{
    Q_OBJECT
public:
    MainWindow();
private:
    QLabel * _icon_laber;
    LoginWidget* _login_widget;
};

#endif // MAINWINDOW_H
