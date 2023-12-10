#ifndef DATABASE_H
#define DATABASE_H

#include<QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QDebug>
class database
{
public:
    database();
    QSqlDatabase mydatabase ;
     bool connect_db();
     bool Deconnect_db();
    ~database();
};

#endif // DATABASE_H
