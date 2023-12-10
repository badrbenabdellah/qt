#include "geo.h"
#include "ui_geo.h"

GEO::GEO(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::GEO)
{
    ui->setupUi(this);
}

GEO::~GEO()
{
    delete ui;
}

void GEO::on_BtnObjectifs_clicked()
{
    ui->labelCoordinateur->clear();
    ui->labelCompetences->clear();
    ui->labelObjectif->setText("\tLe principal objectif de cette filière est de former des ingénieurs géo-informaticiens cartographes gestionnaires de l’information spatiale polyvalents,\n"
                               "\tqui s'intéressent prioritairement à l'organisation, au traitement, à la gestion et à la production des données géographiques et environnementales au moyen de la cartographie,\n"
                               "\tde la télédétection, de l'analyse spatiale quantitative et des systèmes d'informations géographiques.\n"
                               "\tCe programme permet à l'étudiant d’acquérir les connaissances et les compétences en géo-information et les technologies de l’information requises pour la mise en place\n"
                               "\td’infrastructures informatiques de pointe au service de la donnée géo-spatiale.\n"

                               "\tPour atteindre cet objectif, le programme s’appui sur une démarche active de prise en main des méthodes et outils de la géo-information résolument tournée vers les applications.\n"
                               "\tIls combinent des cours théoriques et pratiques incluant aussi des travaux de terrain et des travaux personnels encadrés, des études de cas de montage et de conduite de projets,\n"
                               "\tdes applications opérationnelles et des stages en milieux professionnels.\n");

}


void GEO::on_BtnCoordinateur_clicked()
{
    ui->labelObjectif->clear();
    ui->labelCompetences->clear();
    ui->labelCoordinateur->setText("Coordinnateur pédagogique :\n"
                                   "\t\tPr.Jamal Eddine EL ABDELLAOUI\n"
                                   "\t\tj.elabdellaoui@uae.ac.ma");
}


void GEO::on_BtnCompetences_clicked()
{
    ui->labelCoordinateur->clear();
    ui->labelObjectif->clear();
    ui->labelCompetences->setText("La filière forme pour des profils de :\n"
                                  "\t-Chef de projet informatique.\n"
                                  "\t-Administrateur de données.\n"
                                  "\t-Directeur de service cartographique.\n"
                                  "\t-Expert en acquisition et traitement de données spatiales.\n"
                                  "\t-Ingénieur adjoint en Gestion des réseaux (transport, distribution..)"
                                  "\t-Expert en aménagement et développement durable"
                                  "\tChef de mission géodésique et topographique…\n");
}

