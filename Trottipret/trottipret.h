#ifndef TROTTIPRET_H
#define TROTTIPRET_H

#include <QMainWindow>

namespace Ui {
class Trottipret;
}

class Trottipret : public QMainWindow
{
    Q_OBJECT

public:
    explicit Trottipret(QWidget *parent = 0);
    ~Trottipret();

private:
    Ui::Trottipret *ui;
};

#endif // TROTTIPRET_H
