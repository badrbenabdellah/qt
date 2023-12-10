#include "ajouteretudiant.h"
#include "ui_ajouteretudiant.h"
#include "database.h"
#include <QMessageBox>
//#include "listefilliere.h"

ajouteretudiant::ajouteretudiant(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ajouteretudiant)
{
    ui->setupUi(this);
    //main = new ListeFilliere();
    ui->cmbFilliere->addItem("Logiciel et Systemes Intellignets (LSI)");
    ui->cmbFilliere->addItem("Génie Industriel (GI)");
    ui->cmbFilliere->addItem("Génie Eléctrique et Management Industriel (GEMI)");
    ui->cmbFilliere->addItem("GéoInformqtiaue (Géo)");

    ui->cmbAnnee->addItem("1er Année");
    ui->cmbAnnee->addItem("2éme Année");
    ui->cmbAnnee->addItem("3éme Année");

}

ajouteretudiant::~ajouteretudiant()
{
    delete ui;
}

void ajouteretudiant::on_ButtonEnregistrer_clicked()
{
    QString nom,prenom,cne,cni,annee,filliere;
    nom = ui->txtNom->text();
    prenom = ui->txtPrenom->text();
    cne = ui->txtCNE->text();
    cni = ui->txtCNI->text();
    filliere = ui->cmbFilliere->currentText();
    annee = ui->cmbAnnee->currentText();

    database connexion ;
    if(!connexion.connect_db())
        qDebug() << "Failed to open Database " ;
    connexion.connect_db();
    QSqlQuery querry ;
    querry.prepare("insert into ajouteretudiant (nom,prenom,cni,cne,filliere,annee) values ('"+nom+"','"+prenom+"','"+cni+"','"+cne+"','"+filliere+"','"+annee+"') "); // katpreparer commande sql
    qDebug()<< querry.lastQuery() ;
    if(querry.exec())
    {
        QMessageBox::information(this,tr("Save"),tr("Ajouter avec succées")) ;
        connexion.Deconnect_db();
    }
    else
        QMessageBox::critical(this,tr("Erreur"),querry.lastError().text());

}

void ajouteretudiant::on_ButtonClear_clicked()
{
    ui->txtNom->clear();
    ui->txtPrenom->clear();
    ui->txtCNI->clear();
    ui->txtCNE->clear();
}

