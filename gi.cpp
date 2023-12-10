#include "gi.h"
#include "ui_gi.h"

GI::GI(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::GI)
{
    ui->setupUi(this);
}

GI::~GI()
{
    delete ui;
}

void GI::on_BtnObjectifs_clicked()
{
    ui->labelCoordinateur->clear();
    ui->labelCompetences->clear();
    ui->labelObjectifs->setText("\t-Acquérir de solides compétences dans les domaines des sciences et des technologies;\n"
                                "\t-Disposer d'un potentiel de créativité et d'innovation;\n"
                                "\t-Disposer d'aptitudes à conduire, à maîtriser, à organiser et à faire évoluer des procédés et des processus industriels;\n"
                                "\t-Être capable de conduire, de diriger et de réaliser des projets industriels;\n"
                                "\t-Maîtriser l'évolution des technologies;\n"
                                "\t-Être capable de s’insérer et d’évoluer professionnellement dans les services techniques et scientifiques des entreprises;\n");
}


void GI::on_BtnCompetences_clicked()
{
    ui->labelCoordinateur->clear();
    ui->labelObjectifs->clear();
    ui->labelCompetences->setText("L'activité de l'ingénieur industriel s'étend des premiers contacts avec les clients jusqu'au recyclage du produit qu'il a conçu\n"
                                  "Il assumera donc la responsabilité technique, économique et écologique de son projet.\n"
                                  "L’ingénieur mécanicien intervient dans différents domaines d’activités : automobile, sidérurgie, aéronautique, machines outils, biens de consommation, agroalimentaire.\n"
                                  "L’ingénieur mécanicien s’intègre facilement au sein d’une PME qu’au sein d’une grande entreprise.\n"
                                  "Dans ces secteurs d’activités il occupera des postes clés dans les domaines suivants: \n"
                                  "\t-Recherche et développement.\n"
                                  "\t-Bureaux d’Etudes.\n"
                                  "\t-Conception et Fabrication.\n"
                                  "\t-Services Production.\n"
                                  "\t-Qualité.\n"
                                  "\t-Maintenance.\n"
                                  "\t-Services Logistiques.\n"
                                  "\t-Responsable projet et développement.\n"
                                  "\t-Vente, Mise en service.\n"
                                  "\t-Exploitation.\n"
                                  "\t-Gestion et administration.\n"
                                  "\t-Formation.\n");
}
void GI::on_BtnCoordinateur_clicked()
{
    ui->labelObjectifs->clear();
    ui->labelCompetences->clear();
    ui->labelCoordinateur->setText("Coordinnateur pédagogique : \n"
                                   "\t\tPr. Zoubir ELFELSOUFI\n"
                                   "\t\tzefelsoufi@uae.ac.ma\n");
}

