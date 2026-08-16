#include "mainwindow.h"

#include <QApplication>
#include <QIcon>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //устанавливаю иконку приложения
    a.setWindowIcon(QIcon(":/icon/images/Napominatel_icon.ico"));
    //Устанавливаю цвет приложения
    a.setStyleSheet("QWidget { background-color: #c5ebfd; }");
    MainWindow w;
    w.show();
    return a.exec();
}
