#ifndef DATABASE_H
#define DATABASE_H

#ifndef QDEBUG_H
#define QDEBUG_H

//#include <qdebug.h>

#include <QtSql/QSqlDatabase>
#include <QMessageBox>




class MyDatabase
{
public:
    MyDatabase();

    void connection();
};

#endif // DATABASE_H
#endif // QDEBUG_H
