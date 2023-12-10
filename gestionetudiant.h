#ifndef GESTIONETUDIANT_H
#define GESTIONETUDIANT_H

#include <QDialog>
#include "ajouteretudiant.h"
namespace Ui {
class GestionEtudiant;
}

class GestionEtudiant : public QDialog
{
    Q_OBJECT

public:
    explicit GestionEtudiant(QWidget *parent = nullptr);
    ~GestionEtudiant();

private slots:
    void on_pushButton_clicked();

    void on_AjouterEtud_clicked();

private:
    Ui::GestionEtudiant *ui;
    ajouteretudiant *ptrajouteretudiant;
};

#endif // GESTIONETUDIANT_H
