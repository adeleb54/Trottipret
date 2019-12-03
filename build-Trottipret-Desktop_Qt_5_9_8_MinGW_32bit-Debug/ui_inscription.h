/********************************************************************************
** Form generated from reading UI file 'inscription.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSCRIPTION_H
#define UI_INSCRIPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Inscription
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_nom;
    QLineEdit *lineEdit_nom;
    QLabel *label_mail;
    QLineEdit *lineEdit_mail;
    QLabel *label_mdp;
    QLineEdit *lineEdit_mdp;
    QLabel *label_confirmMdp;
    QLineEdit *lineEdit_confirmMdp;
    QPushButton *button_valider;
    QLabel *titre;

    void setupUi(QDialog *Inscription)
    {
        if (Inscription->objectName().isEmpty())
            Inscription->setObjectName(QStringLiteral("Inscription"));
        Inscription->resize(630, 502);
        formLayoutWidget = new QWidget(Inscription);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(90, 190, 441, 181));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_nom = new QLabel(formLayoutWidget);
        label_nom->setObjectName(QStringLiteral("label_nom"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_nom);

        lineEdit_nom = new QLineEdit(formLayoutWidget);
        lineEdit_nom->setObjectName(QStringLiteral("lineEdit_nom"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_nom);

        label_mail = new QLabel(formLayoutWidget);
        label_mail->setObjectName(QStringLiteral("label_mail"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_mail);

        lineEdit_mail = new QLineEdit(formLayoutWidget);
        lineEdit_mail->setObjectName(QStringLiteral("lineEdit_mail"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_mail);

        label_mdp = new QLabel(formLayoutWidget);
        label_mdp->setObjectName(QStringLiteral("label_mdp"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_mdp);

        lineEdit_mdp = new QLineEdit(formLayoutWidget);
        lineEdit_mdp->setObjectName(QStringLiteral("lineEdit_mdp"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_mdp);

        label_confirmMdp = new QLabel(formLayoutWidget);
        label_confirmMdp->setObjectName(QStringLiteral("label_confirmMdp"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_confirmMdp);

        lineEdit_confirmMdp = new QLineEdit(formLayoutWidget);
        lineEdit_confirmMdp->setObjectName(QStringLiteral("lineEdit_confirmMdp"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_confirmMdp);

        button_valider = new QPushButton(formLayoutWidget);
        button_valider->setObjectName(QStringLiteral("button_valider"));

        formLayout->setWidget(4, QFormLayout::FieldRole, button_valider);

        titre = new QLabel(Inscription);
        titre->setObjectName(QStringLiteral("titre"));
        titre->setGeometry(QRect(210, 50, 161, 61));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(titre->sizePolicy().hasHeightForWidth());
        titre->setSizePolicy(sizePolicy);
        titre->setMinimumSize(QSize(0, 0));

        retranslateUi(Inscription);

        QMetaObject::connectSlotsByName(Inscription);
    } // setupUi

    void retranslateUi(QDialog *Inscription)
    {
        Inscription->setWindowTitle(QApplication::translate("Inscription", "Dialog", Q_NULLPTR));
        label_nom->setText(QApplication::translate("Inscription", "Nom :", Q_NULLPTR));
        lineEdit_nom->setText(QString());
        label_mail->setText(QApplication::translate("Inscription", "Adresse mail :", Q_NULLPTR));
        lineEdit_mail->setText(QApplication::translate("Inscription", "adresse@example.fr", Q_NULLPTR));
        label_mdp->setText(QApplication::translate("Inscription", "Mot de passe :", Q_NULLPTR));
        label_confirmMdp->setText(QApplication::translate("Inscription", "Confirmer le mot de passe :", Q_NULLPTR));
        button_valider->setText(QApplication::translate("Inscription", "Valider", Q_NULLPTR));
        titre->setText(QApplication::translate("Inscription", "<html><head/><body><p><span style=\" font-size:20pt;\">Inscription</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Inscription: public Ui_Inscription {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSCRIPTION_H
