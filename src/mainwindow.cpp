#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    database = new MyDatabase();
    database->connection();


}

MainWindow::~MainWindow()
{
    delete ui;
    delete database;
}

void MainWindow::on_buttonTrips_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}
