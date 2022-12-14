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
#include <QTreeWidget>
#include <QTreeWidgetItem>
#include <QStringList>
#include <QFileDialog>
#include <QSize>
#include <QFile>
#include <QtXml>
#include <QtCore>
#include <QXmlStreamReader>
#include <QByteArray>
#include <database/photobase.h>
#include <choosepath.h>

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

    void on_buttonListOfThings_clicked();

    void on_pbAddTreeWidgetItem_clicked();

    void on_pbRemoteWidgetItem_clicked();

    void on_pbAddPhoto_clicked();

    void on_buttonTravelerCard_clicked();

    void on_pbViewPassport_clicked();

    void on_pbAddPassport_clicked();

    void on_pbAddTicket_clicked();

    void on_pbViewTicket_clicked();

    //--SaveXmlFile
    void saveFileXml(MainWindow* obj);

    void on_pbSaveCard_clicked();

    void on_pbLoadCard_clicked();

    void on_ButtonTripPlan_clicked();

    void on_ButtonLoadingTripPhoto_clicked();

    void on_ButtonViewTripPhoto_clicked();

    void on_ButtonNewPlanTrips_clicked();

    void on_ButtonSavePlanTrips_clicked();

    void on_ButtonLoadPlanTrips_clicked();

private:
    Ui::MainWindow *ui;
    ChoosePath* formChoosePath;
    //MyDatabase myDatabase;
    QSqlTableModel* model;

    int row; //Номер выделенной строки

public:
    QString pathPassport;
    QString pathPhoto;
    QString pathTicket;
    QString PhotoTripPath;
    QString PhotoTripName;
    QString pathPhotoDB;

public slots:
    void getPath(QString path);
};

#endif // MAINWINDOW_H
