#include "mainwindow.h"

MainWindow::MainWindow()  {
    _icon_laber = new QLabel(this);

    this->setWindowTitle("heschat");
    // Set the window icon
    QIcon appIcon(":res/icon.ico");
    this->setWindowIcon(appIcon);
    this->setIsNavigationBarEnable(false);
    this->setUserInfoCardVisible(false);
    this->setWindowButtonFlag(ElaAppBarType::StayTopButtonHint,false);
    this->setWindowButtonFlag(ElaAppBarType::ThemeChangeButtonHint,false);
    this->setWindowButtonFlag(ElaAppBarType::NavigationButtonHint,false);
    this->setWindowButtonFlag(ElaAppBarType::RouteBackButtonHint,false);

    this->setMaximumHeight(500);
    this->setMinimumWidth(300);
    // 禁止窗口大小改变
    this->setFixedSize(QSize(300, 500));
    this->setIsFixedSize(false);

}

