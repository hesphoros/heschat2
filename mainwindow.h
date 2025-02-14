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

class MainWindow : public ElaWindow
{
    Q_OBJECT
public:
    MainWindow();
private:
    QLabel * _icon_laber;
};

#endif // MAINWINDOW_H
