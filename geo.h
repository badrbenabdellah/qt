#ifndef GEO_H
#define GEO_H

#include <QDialog>

namespace Ui {
class GEO;
}

class GEO : public QDialog
{
    Q_OBJECT

public:
    explicit GEO(QWidget *parent = nullptr);
    ~GEO();

private slots:
    void on_BtnObjectifs_clicked();

    void on_BtnObjectifs_2_clicked();

    void on_BtnCoordinateur_clicked();

    void on_BtnCompetences_clicked();

private:
    Ui::GEO *ui;
};

#endif // GEO_H
