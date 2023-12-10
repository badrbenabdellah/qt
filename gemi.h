#ifndef GEMI_H
#define GEMI_H

#include <QDialog>

namespace Ui {
class GEMI;
}

class GEMI : public QDialog
{
    Q_OBJECT

public:
    explicit GEMI(QWidget *parent = nullptr);
    ~GEMI();

private slots:
    void on_BtnObjectifs_clicked();

    void on_BtnProgramme_clicked();

    void on_BtnCooridnateur_clicked();

    void on_BtnCompetences_clicked();

private:
    Ui::GEMI *ui;
};

#endif // GEMI_H
