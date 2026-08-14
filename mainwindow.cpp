#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qstring.h>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_hello_clicked(){
    if (ui->le_name->text() == QString("")){
        auto result = QMessageBox::question(this, "Внимание!", "Ты хлебушек?");

        if (result == QMessageBox::StandardButton::Yes){
            QMessageBox::information(this, "Хуясе", "зовите MEEEEEDIIIIC!");
        }else if (result == QMessageBox::StandardButton::No){
            QMessageBox::information(this, "Странно", "А че тупишь?");
        }else {
            QMessageBox::information(this, "...", "Ну и хуй с тобой...");
        }
    }else{
        ui->lbl_greetings->setText("Hello, " + ui->le_name->text() + "!");
    }
}


