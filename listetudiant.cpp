#include "listetudiant.h"
#include "ui_listetudiant.h"

listetudiant::listetudiant(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::listetudiant)
{
    ui->setupUi(this);
}

listetudiant::~listetudiant()
{
    delete ui;
}
