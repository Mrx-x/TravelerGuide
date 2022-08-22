#include "database.h"

MyDatabase::MyDatabase()
{

}

void MyDatabase::connection() {

    database = QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("C:/Users/monst/Desktop/Desktop/Work/3-course/ChMV/CourseWork/TravelerGuide/src/database/Trip.db");
    //db.setUserName("user");
    //db.setHostName("localhost");
    //db.setPassword("qwerty");
    if(!database.open()) {
        QMessageBox::warning(0,
                              "Error",
                              "Cannot open database",
                             "Ok",
                              QString(),
                              0
                              );
        qDebug("Cannot open database\n");
        qDebug() << database.lastError().text();
    }else {
        qDebug("Succesfull database\n");
    }
}

/*void MyDatabase::request_to_create_minimal_records(QSqlDatabase& db) {
    QSqlQuery query(db);

    QString str = "CREATE TABLE Trip ("
            "Город VARCHAR PRIMARY KEY NOT NULL, "
            "Страна VARCHAR, "
            "Маршрут VARCHAR, "
            "'Минимальный список вещей' VARCHAR, "
            "'Длительность(ЧЧ.ММ)' FLOAT, "
            "Транспорт VARCHAR, "
            "Погода VARCHAR, "
            "Вебсайт VARCHAR"
            ");";
    if(!query.exec(str)) {
        qDebug() << query.lastError().text();
    }
}*/
