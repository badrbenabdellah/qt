#include "gemi.h"
#include "ui_gemi.h"
#include <iostream>
using namespace std;
GEMI::GEMI(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::GEMI)
{
    ui->setupUi(this);
}

GEMI::~GEMI()
{
    delete ui;
}


void GEMI::on_BtnObjectifs_clicked()
{
    ui->labelCoordi->clear();
    ui->labelCompetences->clear();
    ui->contenuObj->setText("La formation proposée dans la spécialité Génie Electrique de la FST de Tanger a pour but de fournir au futur ingénieur en Génie Electrique tous les éléments\n"
                            "indispensables à son insertion harmonieuse dans le monde industriel.Les enseignements associent théorie et techniques,expérimentation,projets et réalisations.\n"
                            "\n"
                            "Les enseignements dispensés sont répartis en quatre groupes de matières :\n"
                            "\t-Des enseignements à caractère général.\n"
                            "\t-Des disciplines fondamentales.\n"
                            "\t-Un enseignement professionnel.\n"
                            "\t-Une formation pratique par le biais de projets et de stages.\n");

}

void GEMI::on_BtnProgramme_clicked()
{

}


void GEMI::on_BtnCooridnateur_clicked()
{
    ui->contenuObj->clear();
    ui->labelCompetences->clear();
    ui->labelCoordi->setText("Coordinnateur pédagogique :\n"
                             "\tPr. Ibrahim HADJ BARAKA\n"
                             "\tihadjbaraka@uae.ac.ma");

}


void GEMI::on_BtnCompetences_clicked()
{
    ui->labelCoordi->clear();
    ui->contenuObj->clear();
    ui->labelCompetences->setText("La formation proposée vise à préparer les futurs ingénieurs dans les aspects principaux de génie électrique et management industriel.\n"
                                "   * La production, la distribution, la transformation et l'utilisation de l'énergie électrique. la conception et la mise en oeuvre d'ensembles formés par les machines\n"
                                "     électriques et les convertisseurs qui les alimentent;\n"
                                "   * L'automatique et tous les aspects qui interviennent dans la commande des systèmes industriels;Dans la partie électronique, les systèmes sont étudiés du point\n "
                                "     de vue de leur conception,réalisation et mise en oeuvre.\n"
                                "   * La gestion de la maintenance, l’ingénierie de la qualité et l’amélioration des processus industriels et assurance qualité\n"
                                "\n"
                                "   DÉBOUCHÉS:\n"
                                "               \t-Ingénieur électronicien, électrotechnicien, automaticien et/ou manager\n"
                                "               \t-Ingénieur de recherche\n"
                                "               \t-Ingénieur d'études\n"
                                "               \t-Ingénieur des méthodes et des essais\n"
                                "               \t-Ingénieur de fabrication\n"
                                "               \t-Ingénieur logistique\n"
                                "               \t-Ingénieur technico-commercial ou d'affaires\n");
}

