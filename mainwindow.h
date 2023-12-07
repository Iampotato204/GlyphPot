#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSettings>
#include <QVariant>

#include <QToolBar>
#include <QPushButton>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int createToolbars();
    const QString COMPANY_NAME="scam.co";
    const QString APP_NAME="scam.app";

private:
    Ui::MainWindow *ui;
    void readSettings();
    void writeSettings();
};
#endif // MAINWINDOW_H
