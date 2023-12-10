#ifndef LISTEFILLIERE_H
#define LISTEFILLIERE_H

#include <QDialog>
#include "gemi.h"
#include "lsi.h"
#include "gi.h"
#include "geo.h"

namespace Ui {
class ListeFilliere;
}

class ListeFilliere : public QDialog
{
    Q_OBJECT

public:
    explicit ListeFilliere(QWidget *parent = nullptr);
    ~ListeFilliere();

private slots:
    void on_pushButton_clicked();

    void on_BtnGEMI_clicked();

    void on_pushButton_3_clicked();

    void on_BtnLSI_clicked();

    void on_pushButton_4_clicked();

    void on_BtnGI_clicked();

    void on_BtnGeo_clicked();

private:
    Ui::ListeFilliere *ui;
    GEMI *ptrgemi;
    LSI *ptrlsi;
    GI *ptrgi;
    GEO *ptrgeo;


};

#endif // LISTEFILLIERE_H
