#include <database/photobase.h>

void createConnetion(QString name) {
    QSqlDatabase dbPhoto = QSqlDatabase::addDatabase("QSQLITE");
    dbPhoto.setDatabaseName(name);

    if(!dbPhoto.open()) {
        qDebug() << "Cannot open database" << dbPhoto.lastError().text();
    }else {
        qDebug() <<"the databasePhoto has been created";
    }
}

bool createTables() {
    QSqlQuery query;
    query.exec("CREATE TABLE img ("
               "id INTEGER PRIMARY KEY AUTOINCREMENT, "
               "filename TEXT, "
               "imagepath TEXT) ");
    return 1;
}
