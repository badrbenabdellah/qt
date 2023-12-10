#include "database.h"

database::database()
{
    connect_db();
}

bool database::connect_db(){
    mydatabase = QSqlDatabase::addDatabase("QSQLITE");
    mydatabase.setDatabaseName("C:/Users/benab/OneDrive/Documents/LSI20232024/DB/LSI.db");

    if(!mydatabase.open()){
        qDebug()<<"error is not connected "<<mydatabase.lastError().text();
        return false;
    }else{
        qDebug()<<"connceted succefully";
        return true;
    }
}

bool database::Deconnect_db(){
    mydatabase.close();
    mydatabase.removeDatabase(QSqlDatabase::defaultConnection);
    if(mydatabase.open()){
        return false;
    }else{
        return true;
    }
}

database::~database(){
    this->Deconnect_db();
}
