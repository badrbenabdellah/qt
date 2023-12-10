#ifndef AJOUTERETUDIANT_H
#define AJOUTERETUDIANT_H

#include "qsqldatabase.h"
#include <QDialog>
#include "connexion_mysql.h"


namespace Ui {
class ajouteretudiant;
}

class ajouteretudiant : public QDialog
{
    Q_OBJECT

public:
    explicit ajouteretudiant(QWidget *parent = nullptr);
    ~ajouteretudiant();

private slots:
    void on_ButtonEnregistrer_clicked();


    void on_ButtonRetour_clicked();

    void on_ButtonClear_clicked();

private:
    Ui::ajouteretudiant *ui;

};

#endif // AJOUTERETUDIANT_H
