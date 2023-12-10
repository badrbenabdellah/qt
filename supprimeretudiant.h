#ifndef SUPPRIMERETUDIANT_H
#define SUPPRIMERETUDIANT_H

#include <QDialog>
#include <QWidget>
#include <QMessageBox>

namespace Ui {
class SupprimerEtudiant;
}

class SupprimerEtudiant : public QDialog
{
    Q_OBJECT

public:
    explicit SupprimerEtudiant(QWidget *parent = nullptr);
    ~SupprimerEtudiant();

private:
    Ui::SupprimerEtudiant *ui;
};

#endif // SUPPRIMERETUDIANT_H



