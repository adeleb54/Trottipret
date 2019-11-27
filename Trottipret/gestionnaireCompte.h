#ifndef GESTIONNAIRECOMPTE_H
#define GESTIONNAIRECOMPTE_H

#include <QMainWindow>
#include <QMessageBox>
#include <QRegularExpression>
#include <string.h>

namespace Ui {
class GestionnaireCompte;
}

class GestionnaireCompte : public QMainWindow
{
    Q_OBJECT

public:
    explicit GestionnaireCompte(QWidget *parent = 0);
    std::string getNom();
    std::string getMdp();
    std::string getMdpConfirmation();
    std::string getAdresse();
    ~GestionnaireCompte();

private:
    Ui::GestionnaireCompte *ui;

private slots:
    void verification();
};


#endif // GESTIONNAIRECOMPTE_H
