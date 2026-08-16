#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow){
    ui->setupUi(this);

    //Задаю минимальный размер главного окна.
    this->setMinimumSize(QSize(500, 500));
    //Задаю имя главного окна
    this->setWindowTitle("Napominatel");

    //Задаю начальные позиции лого
    SetupLogo();
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::SetupLogo(){
    //установка картинки используя путь
    QString image_path = ":images/images/napominatel_logo.jpg";
    logo_pixmap_ = QPixmap{image_path};

    if(logo_pixmap_.isNull()){
        qWarning() << "logo_pixmap_ did not receive the image";
    }else{
        qInfo() << "logo_pixmap_ received an image";
    }

    //Теперь устанавливаю логотип в позицию
    //изменяю размер пикчи
    QPixmap resized_logo = logo_pixmap_.scaledToWidth(500, Qt::SmoothTransformation);
    //устанавливаю в лейбл пикчу
    ui->lbl_logo->setPixmap(resized_logo);
    //задаю позицию и размер лейбла
    ui->lbl_logo->move(0,0);
    ui->lbl_logo->setFixedSize(resized_logo.width(), resized_logo.height());
}

void MainWindow::resizeEvent(QResizeEvent *event){
}




