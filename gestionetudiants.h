#ifndef GESTIONETUDIANTS_H
#define GESTIONETUDIANTS_H

#include <QDialog>

namespace Ui {
class GestionEtudiants;
}

class GestionEtudiants : public QDialog
{
    Q_OBJECT

public:
    explicit GestionEtudiants(QWidget *parent = nullptr);
    ~GestionEtudiants();

private:
    Ui::GestionEtudiants *ui;
};

#endif // GESTIONETUDIANTS_H
