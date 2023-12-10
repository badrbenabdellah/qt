#ifndef CONNEXION_MYSQL_H
#define CONNEXION_MYSQL_H

#include <QCoreApplication>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlQuery>
#include <QtSql/QSqlError>

#include "QSqlDatabase"
#include "QSqlQuery"

class DatabaseConnection
{
public:
    static bool vraiConnexionBD()
    {
        QSqlDatabase connexion = QSqlDatabase::addDatabase("QSQLITE");
        connexion.setUserName("C:/Users/benab/OneDrive/Documents/LSI20232024/DB/LSI.db");

        if(connexion.open())
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    static void closeDB() {
        QSqlDatabase connexion = QSqlDatabase::database("QSQLITE");
        connexion.close();
        qDebug() << "Connexion à la base de données fermée avec succès";
    }
};

#endif // CONNEXION_MYSQL_H
