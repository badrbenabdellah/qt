#include "basedonnees.h"

//basedonnees::basedonnees() {}
#include "basedonnees.h"
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>

bool dbConnected()
{
    QSqlDatabase db1;
    db1 = QSqlDatabase::addDatabase("QSQLITE");
    db1.setDatabaseName("LSI.db");
    if(db1.open())
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool dbAccessed()
{
    QSqlDatabase db1;
    db1 = QSqlDatabase::addDatabase("QSQLITE","MyConnect");
    db1.setDatabaseName("LSI.db");
    if(db1.open())
    {
        return true;
    }
    else
    {
        return false;
    }
}
