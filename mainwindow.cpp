#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug() << QSqlDatabase::drivers();
    ptrajouteretudiant = new ajouteretudiant();
    ptrlistefilliere = new ListeFilliere();
    ptrgestionEtudiants = new GestionEtudiant();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_BtnListeFilliere_clicked()
{
    ptrlistefilliere->show();
}


void MainWindow::on_BtnGestionEtud_clicked()
{
    ptrgestionEtudiants->show();
}

