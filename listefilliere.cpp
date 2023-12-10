#include "listefilliere.h"
#include "ui_listefilliere.h"

ListeFilliere::ListeFilliere(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ListeFilliere)
{
    ui->setupUi(this);
    ptrgemi = new GEMI();
    ptrlsi = new LSI();
    ptrgeo = new GEO();
    ptrgi = new GI();
}

ListeFilliere::~ListeFilliere()
{
    delete ui;
}


void ListeFilliere::on_BtnGEMI_clicked()
{
    ptrgemi->show();
}


void ListeFilliere::on_BtnLSI_clicked()
{
    ptrlsi->show();
}


void ListeFilliere::on_BtnGI_clicked()
{
    ptrgi->show();
}


void ListeFilliere::on_BtnGeo_clicked()
{
    ptrgeo->show();
}

