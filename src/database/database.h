#ifndef DATABASE_H
#define DATABASE_H

#include <QDebug>

#include <QMessageBox>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>

class MyDatabase
{
public:
    MyDatabase();
    QSqlDatabase database;
    void connection();
    //void request_to_create_minimal_records(QSqlDatabase& db);
};



#endif // DATABASE_H
