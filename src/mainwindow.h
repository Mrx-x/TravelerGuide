#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPixmap>
#include <QtWidgets/QStackedWidget>
#include <QPushButton>
#include "database/database.h"
#include <QSqlTableModel>
#include <QObject>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_buttonTrips_clicked();

    void on_pushButtonAdd_clicked();

    void on_pushButtonDelete_clicked();

    void on_tableView_clicked(const QModelIndex &index);

    void on_pushButtonSearch_clicked();

    void on_pushButtonCancel_clicked();

private:
    Ui::MainWindow *ui;
    //MyDatabase myDatabase;
    QSqlTableModel* model;

    int row; //Номер выделенной строки
};

#endif // MAINWINDOW_H
