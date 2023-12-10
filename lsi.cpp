#include "lsi.h"
#include "ui_lsi.h"

LSI::LSI(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::LSI)
{
    ui->setupUi(this);
}

LSI::~LSI()
{
    delete ui;
}

void LSI::on_BtnObjectifs_clicked()
{
    ui->labelCoordinateur->clear();
    ui->labelCompetences->clear();
    ui->labelObjectifs->setText("Former des ingénieurs capables de :\n"
                                "       *Comprendre les enjeux des techniques de l’information.\n"
                                "       *Proposer et construire des solutions informatiques et décisionnelles compétitives et réalistes.\n"
                                "       *Intervenir sur des problématiques informatiques complexes.\n"
                                "       *Piloter des projets informatiques et les changements qu'ils entraînent.\n");
}


void LSI::on_BtnCoordinateur_clicked()
{
    ui->labelObjectifs->clear();
    ui->labelCompetences->clear();
    ui->labelCoordinateur->setText("Coordinnateur pédagogique : \n"
                                   "                Pr.Lotfi EL AACHAK\n"
                                   "                lelaachak@uae.ac.ma");
}


void LSI::on_BtnCompetences_clicked()
{
    ui->labelObjectifs->clear();
    ui->labelCoordinateur->clear();
    ui->labelCompetences->setText("COMPÉTENCES VISÉES :\n"
                                  "       *Concevoir et développer des plates formes logiciels desktop, logiciel et mobile.\n"
                                  "       *Concevoir et mettre en place des systèmes d’aide à la décision.\n"
                                  "       *Administrer une infrastructure informatique.\n"
                                  "       *Gérer et conduire un projet informatique.\n"
                                  "DÉBOUCHÉS :\n"
                                  "       *Ingénierie logicielle.\n"
                                  "       *Ingénierie de réseaux d’entreprises.\n"
                                  "       *Intégration des systèmes d’aide à la décision.\n"
                                  "       *Administrateur Systèmes et réseaux.\n"
                                  "       *Concepteur des plateformes décisionnelles.");
}

