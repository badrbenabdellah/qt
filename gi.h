#ifndef GI_H
#define GI_H

#include <QDialog>

namespace Ui {
class GI;
}

class GI : public QDialog
{
    Q_OBJECT

public:
    explicit GI(QWidget *parent = nullptr);
    ~GI();

private slots:
    void on_BtnObjectifs_clicked();

    void on_BtnCompetences_clicked();

    void on_BtnCoordinateur_clicked();

private:
    Ui::GI *ui;
};

#endif // GI_H
