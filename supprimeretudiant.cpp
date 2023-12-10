#include "supprimeretudiant.h"
#include "ui_supprimeretudiant.h"
//#include "supprimeretudiant.h"
//#include "database.h"

SupprimerEtudiant::SupprimerEtudiant(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::SupprimerEtudiant)
{
    ui->setupUi(this);

}

SupprimerEtudiant::~SupprimerEtudiant()
{
    delete ui;
}
