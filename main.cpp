#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QSqlDatabase db;
    db= QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/benab/OneDrive/Documents/LSI20232024/DB/LSI.db");

    if(!db.open())
        qDebug()<<"problem while opening the database";
    QString query1="CREATE TABLE ajouteretudiant("
                     "nom varchar(20) ,"
                     "prenom varchar(20),"
                     "cne varchar(20),"
                     "cni varchar(20),"
                     "filliere varchar(20),"
                     "annee varchar(20),";

    QSqlQuery qry;
    if(!qry.exec(query1))
        qDebug()<<"error creating ajouteretudiant table";

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();

}
