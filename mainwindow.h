#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <qstring.h>
#include <QCoreApplication>
#include <QDebug>

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


    //Установка изображения в объект label
    void SetupLogo();

    //событие изменения размера окна
    void resizeEvent(QResizeEvent* event) override;


private:
    Ui::MainWindow *ui;

    //Логотип программы
    QPixmap logo_pixmap_;
};
#endif // MAINWINDOW_H
