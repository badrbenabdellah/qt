#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlDriver>
#include <QtCore>
#include "ajouteretudiant.h"
#include "listetudiant.h"
#include "listefilliere.h"
#include "gestionetudiant.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_BtnAjouterEtud_clicked();

    void on_BtnListeFilliere_clicked();

    void on_BtnGestionEtud_clicked();

private:
    Ui::MainWindow *ui;
    MainWindow *main;
    MainWindow *ptrmain;
    ajouteretudiant *ptrajouteretudiant;
    listetudiant *ptrlistetudiant;
    ListeFilliere *ptrlistefilliere;
    GestionEtudiant *ptrgestionEtudiants;


};
#endif // MAINWINDOW_H
