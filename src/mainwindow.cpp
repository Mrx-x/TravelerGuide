#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    MyDatabase* myDatabase = new MyDatabase();
    myDatabase->connection();
    ui->statusBar->showMessage(myDatabase->database.lastError().text());
    //myDatabase.request_to_create_minimal_records(db);

    model = new QSqlTableModel(this, myDatabase->database);
    model->setTable("Trip");
    //model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    model->select();
    ui->tableView->setModel(model);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonTrips_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButtonAdd_clicked()
{
    model->insertRow(model->rowCount());
}

void MainWindow::on_pushButtonDelete_clicked()
{
        model->removeRow(row);
}

void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    row = index.row();
}

void MainWindow::on_pushButtonSearch_clicked()
{
    if(ui->radioButtonCity->isChecked()) {
        model->setFilter(QString("Город = '%1'").arg(ui->lineEdit->text()));
    }else {
        model->setFilter(QString("Страна = '%1'").arg(ui->lineEdit->text()));
    }
}

void MainWindow::on_pushButtonCancel_clicked()
{
    model->setFilter(QString());
}
