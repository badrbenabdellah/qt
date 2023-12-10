#ifndef LSI_H
#define LSI_H

#include <QDialog>

namespace Ui {
class LSI;
}

class LSI : public QDialog
{
    Q_OBJECT

public:
    explicit LSI(QWidget *parent = nullptr);
    ~LSI();

private slots:
    void on_BtnObjectifs_clicked();

    void on_BtnCoordinateur_clicked();

    void on_BtnCompetences_clicked();

private:
    Ui::LSI *ui;
};

#endif // LSI_H
