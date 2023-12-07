#include "iostream"
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QSettings>
#include <QVariant>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    this->readSettings();
    //std::cout<<this->isMaximized()<<std::endl;
    //std::cout<<QVariant(this->isMaximized()).toBool()<<std::endl;
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    this->writeSettings();
    delete ui;
}

void MainWindow::readSettings()
{
    QSettings app_settings(COMPANY_NAME, APP_NAME);
    app_settings.beginGroup("window");
    if(app_settings.value("maximized").toBool())
        this->showMaximized();
    app_settings.endGroup();
}

void MainWindow::writeSettings()
{
    QSettings app_settings(COMPANY_NAME, APP_NAME);
    app_settings.beginGroup("window");
        app_settings.setValue("maximized",this->isMaximized());
    app_settings.endGroup();
}

int MainWindow::createToolbars()
{
    QToolBar* fileOptionsToolbar = this->addToolBar("fileOptionsToolbar");
    fileOptionsToolbar->addWidget(new QPushButton());

    QToolBar* toolbarOptionsToolbar = this->addToolBar("fileOptionsToolbar");
    toolbarOptionsToolbar->addWidget(new QPushButton());
}

