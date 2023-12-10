#include "gestionetudiant.h"
#include "ui_gestionetudiant.h"

GestionEtudiant::GestionEtudiant(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::GestionEtudiant)
{
    ui->setupUi(this);
    ptrajouteretudiant = new ajouteretudiant();
}

GestionEtudiant::~GestionEtudiant()
{
    delete ui;
}



void GestionEtudiant::on_AjouterEtud_clicked()
{
    ptrajouteretudiant->show();
}

