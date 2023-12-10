#ifndef LISTETUDIANT_H
#define LISTETUDIANT_H

#include <QDialog>

namespace Ui {
class listetudiant;
}

class listetudiant : public QDialog
{
    Q_OBJECT

public:
    explicit listetudiant(QWidget *parent = nullptr);
    ~listetudiant();

private:
    Ui::listetudiant *ui;
};

#endif // LISTETUDIANT_H
