#ifndef GESTIONNAIRECOMPTE_H
#define GESTIONNAIRECOMPTE_H

#include <QMainWindow>
#include <string.h>

namespace Ui {
class GestionnaireCompte;
}

class GestionnaireCompte : public QMainWindow
{
    Q_OBJECT

public:
    explicit GestionnaireCompte(QWidget *parent = 0);
    ~GestionnaireCompte();

private:
    Ui::GestionnaireCompte *ui;

public slots:
    void getNom();
};


#endif // GESTIONNAIRECOMPTE_H
