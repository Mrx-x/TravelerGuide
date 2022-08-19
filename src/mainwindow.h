#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QPixmap>
#include <QtWidgets/QStackedWidget>
#include <QPushButton>
#include "database/database.h"
#include <qdebug.h>

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

private:
    Ui::MainWindow *ui;
    MyDatabase* database;

};

#endif // MAINWINDOW_H
