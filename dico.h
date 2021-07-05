#ifndef DICO_H
#define DICO_H

#include <QMainWindow>
#include <QAction>
#include <QMenuBar>
#include <QMenu>
#include <QLabel>
#include <QPushButton>
#include <QSound>
#include <QMessageBox>
#include <QLabel>
#include <QListWidgetItem>

namespace Ui
{
    class dico;
}

class dico : public QMainWindow
{
    Q_OBJECT

public slots:
   void ouvrirapropo();
   void accueil();
   void retour();

     //theme//
   void bleu();
   void rouge();
   void defaut();
   void bleuciel();

   void on_windows();
   void on_mac();

     //son//
   void son_on();
   void son_off();

     // recherche//


   void recherche();
   void on_item(QListWidgetItem*);



public:
    dico(QWidget *parent = 0);
    ~dico();

private:
    Ui::dico *ui;
    QListWidgetItem *item1,*item2,*item3,*item4,*item5,*item6,*item7;
    QPushButton *enligne,*enregistrement,*site,*forum,*windows,*mac;
    QMenuBar *menuBar;
    QSound *son;
    QLabel *photo,*fond,*version;
    QMenu *menu_fichier,*menu_edition,*menu_affichage,*menu_apropo;
    QAction *action_fichier1,*action_affichage1,*action_affichage2,*action_affichage3,*action_affichage4,*action_affichage5,*action_apropo;

};

#endif // DICO_H
