#include "database.h"

MyDatabase::MyDatabase()
{

}

void MyDatabase::connection() {

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("database/Trip.accdb");
    db.setUserName("user");
    db.setHostName("localhost");
    db.setPassword("qwerty");
    if(!db.open()) {
        QMessageBox::warning(0,
                              "Error",
                              "Cannot open database",
                             "Yes",
                             "No",
                              QString(),
                              0,
                              1
                              );
        qDebug("Cannot open database\n");
    }else {
        qDebug("Succesfull database\n");
    }
}
