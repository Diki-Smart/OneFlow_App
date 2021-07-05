#include "dico.h"
#include "ui_dico.h"

dico::dico(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::dico)
{
    ui->setupUi(this);
      this->setGeometry(300,150,800,470);
      this->setMaximumSize(800,470);
      this->setMinimumSize(800,470);
      //this->setStatusBar(QStatuBar());
      //this->setStyleSheet("background-color: #FFFFFF");
      this->setWindowIcon(QIcon("icon.png"));
      this->setWindowTitle("Dico-Smart 1.0  (By Diki-Smart ) ");
      this->setStatusTip("Dico ® Smart | ® 2014. © DIKI- Smart Corporation... |   dikijonathan@gmail.com              ");





        QPalette palette;
        QBrush brush(QColor(195, 210, 222, 255));
        palette.setBrush(QPalette::Active,   QPalette::Window, brush);
        palette.setBrush(QPalette::Active,   QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        setPalette(palette);

    //-----------------------Barrre de Menu------------------------//

        menuBar = new QMenuBar(this);
        menuBar->setObjectName("&menuBar");
        menuBar->setGeometry(0, 0, 111111, 25);
        menu_fichier   = new QMenu("Fichier",this);
        menu_edition   = new QMenu("Edition",this);
        menu_affichage = new QMenu("Themes",this);
        menu_apropo    = new QMenu("?",this);

        menuBar->addMenu(menu_fichier);
        menuBar->addMenu(menu_edition);
        menuBar->addMenu(menu_affichage);
        menuBar->addMenu(menu_apropo);

        action_fichier1= new QAction("&Quitter",this);
        action_fichier1->setIcon (QIcon("del.png"));

        action_affichage1= new QAction("&Plein ecran",this);
        action_affichage1->setCheckable(true);

        action_affichage2= new QAction("&bleu",this);
        action_affichage2->setIcon(QIcon("bleu.png"));
        action_affichage5= new QAction("&bleu ciel",this);
        action_affichage5->setIcon(QIcon("bleuciel.png"));
        action_affichage3= new QAction("&rouge",this);
        action_affichage3->setIcon(QIcon("red.png"));
        action_affichage4= new QAction("&Par defaut",this);


        action_apropo    = new QAction("A propos de L'App ",this);


        menu_fichier->addAction(action_fichier1);
        menu_affichage->addAction(action_affichage1);
        menu_affichage->addAction(action_affichage2);
        menu_affichage->addAction(action_affichage5);
        menu_affichage->addAction(action_affichage3);
        menu_affichage->addAction(action_affichage4);
        menu_apropo->addAction(action_apropo);

QObject::connect(action_fichier1, SIGNAL(triggered()), qApp, SLOT(quit()));
QObject::connect(action_apropo ,SIGNAL(triggered()),this, SLOT(ouvrirapropo()));
QObject::connect(action_affichage2 ,SIGNAL(triggered()),this, SLOT(bleu()));
QObject::connect(action_affichage3 ,SIGNAL(triggered()),this, SLOT(rouge()));
QObject::connect(action_affichage5 ,SIGNAL(triggered()),this, SLOT(bleuciel()));
QObject::connect(action_affichage4 ,SIGNAL(triggered()),this, SLOT(defaut()));



//-----------------------  Boutons , label & linewidget  de recherche ------------------------//

ui->Buttonaccueil->setIcon(QIcon("homed.png"));
ui->Buttonaccueil->setIconSize(QSize(60,38));
ui->Buttonaccueil->setFlat(true);
QObject :: connect (ui->Buttonaccueil,SIGNAL(clicked()),this,SLOT(accueil()));

ui->Buttonreturn->setIcon(QIcon("return.png"));
ui->Buttonreturn->setIconSize(QSize(23,23));
ui->Buttonreturn->setFlat(true);
QObject :: connect (ui->Buttonreturn,SIGNAL(clicked()),this,SLOT(retour()));

ui->Buttonliste->setIcon(QIcon("def.png"));
ui->Buttonliste->setIconSize(QSize(27,27));
ui->Buttonliste->setFlat(true);
ui->Buttonliste->setHidden(true);
QObject :: connect (ui->Buttonliste,SIGNAL(clicked()),this,SLOT(recherche()));


ui->Buttonrecherche->setIcon(QIcon("search.png"));
ui->Buttonrecherche->setIconSize(QSize(26,26));
ui->Buttonrecherche->setFlat(true);
QObject :: connect(ui->Buttonrecherche,SIGNAL(clicked()),this,SLOT(recherche()));

ui->Buttongoogle->setIcon(QIcon("gplus.png"));
ui->Buttongoogle->setIconSize(QSize(30,30));
ui->Buttongoogle->setFlat(true);

ui->label3d->setPixmap(QPixmap("pn.png"));
ui->label3d->setScaledContents(true);


QObject::connect(ui->lineEdit,SIGNAL(returnPressed()),this,SLOT(recherche()));

ui->Buttonf->setIcon(QIcon("face.png"));
ui->Buttonf->setIconSize(QSize(26,26));
ui->Buttonf->setFlat(true);

ui->Buttont->setIcon(QIcon("twitter.png"));
ui->Buttont->setIconSize(QSize(26,26));
ui->Buttont->setFlat(true);

ui->Buttonm->setIcon(QIcon("mailu.png"));
ui->Buttonm->setIconSize(QSize(26,26));
ui->Buttonm->setFlat(true);

ui->Buttonw->setIcon(QIcon("wp.png"));
ui->Buttonw->setIconSize(QSize(26,26));
ui->Buttonw->setFlat(true);


 //----------------------- son ------------------------//


son = new QSound("enya.wav",this);
son->setLoops(-1);
son->play();





//-------------------- Boutons son------------------------//



ui->Buttonson->setIcon(QIcon("p.png"));
ui->Buttonson->setIconSize(QSize(26,26));
//ui->Buttonson->setFlat(true);
ui->Buttonson->setHidden(true);

ui->Buttonsonoff->setIcon(QIcon("pa.png"));
//ui->Buttonsonoff->setFlat(true);
ui->Buttonsonoff->setIconSize(QSize(26,26));


QObject :: connect(ui->Buttonson,SIGNAL(clicked()),this,SLOT(son_on()));
QObject :: connect(ui->Buttonson,SIGNAL(clicked()),son,SLOT(play()));
QObject :: connect(ui->Buttonsonoff,SIGNAL(clicked()),this,SLOT(son_off()));
QObject :: connect(ui->Buttonsonoff,SIGNAL(clicked()),son,SLOT(stop()));




//--------------------- elmnts Accueil, Fond , Photo QLabel(texBrowser)-------------------//




photo = new QLabel(ui->textBrowser);
photo->setPixmap(QPixmap(""));
photo->setScaledContents(true);

fond = new QLabel(ui->textBrowser);
fond->setPixmap(QPixmap("k3.png"));
fond->setScaledContents(true);
fond->setGeometry(1,1,520,355);

enligne = new QPushButton(fond);
enligne->setGeometry(20,56,130,75);
enligne->setIcon(QIcon("b3.png"));
enligne->setIconSize(QSize(130,130));
enligne->setFlat(true);


enregistrement = new QPushButton(fond);
enregistrement->setGeometry(20,130,132,75);
enregistrement->setIcon(QIcon("b1.png"));
enregistrement->setIconSize(QSize(130,130));
enregistrement->setFlat(true);

site = new QPushButton(fond);
site->setGeometry(148,130,132,75);
site->setIcon(QIcon("b4.png"));
site->setIconSize(QSize(130,130));
site->setFlat(true);

forum = new QPushButton(fond);
forum->setGeometry(18,206,264,130);
forum->setIcon(QIcon("b2.png"));
forum->setIconSize(QSize(267,224));
forum->setFlat(true);


version = new QLabel (fond);
version->setGeometry(300,230,200,100);
version->setText("<font  face=arial size=1 color=#E6E6E6  <b> <h4>Choisissez le theme <br /> qui vous convient :   </h4></b></font> ");

windows = new QPushButton("Windows",fond);
windows->setGeometry(430,260,52,22);
QObject :: connect (windows,SIGNAL(clicked()),this,SLOT(on_windows()));

mac = new QPushButton("Mac.os",fond);
mac->setGeometry(430,282,52,22);
QObject :: connect (mac,SIGNAL(clicked()),this,SLOT(on_mac()));




 //----------------------- listWidget------------------------//


ui->listWidgetR->setHidden(true);


 item1 = new QListWidgetItem (" Bill Gates",ui->listWidgetR);
item1->setIcon(QIcon("avatar.png"));

 item2 = new QListWidgetItem (" Setve Jobs",ui->listWidgetR);
item2->setIcon(QIcon("avatar.png"));

 item3 = new QListWidgetItem (" Stephen Hawking",ui->listWidgetR);
item3->setIcon(QIcon("avatar.png"));

 item4 = new QListWidgetItem (" Stephen Wozniak",ui->listWidgetR);
item4->setIcon(QIcon("avatar.png"));

 item5 = new QListWidgetItem (" Dr.iSO",ui->listWidgetR);
item5->setIcon(QIcon("avatar.png"));


item6 = new QListWidgetItem (" Mr.Stan",ui->listWidgetR);
item6->setIcon(QIcon("avatar.png"));

item7 = new QListWidgetItem (" Diki-Smart",ui->listWidgetR);
item7->setIcon(QIcon("avatar.png"));

QObject :: connect ( ui->listWidgetR,SIGNAL(itemClicked(QListWidgetItem*)),this,SLOT( on_item(QListWidgetItem*)));


}



//---------------------------------------------------------------------------------------------------//
//------------------------------------- SLOTS PERSONNALISES -----------------------------------------//
//---------------------------------------------------------------------------------------------------//




void dico:: retour()
{
   ui->listWidgetR->setHidden(true);
   ui->lineEdit->setText("");
}

void dico::ouvrirapropo()
{
QMessageBox::information(this, "Dico_Smart 1.0"," version du produit : 1.0  <br /> Auteur : Diki-Smart  <br />-------------------------------------<br />  Merci d'utiliser ce dictionnaire .<br />"
"Il a été codé par <font face=‘’verdana’’ color=blue <h2> <b>Diki-Smart</b> </h2> </font>de B.T corp, dans le cadre <span style='textdecoration:line-through;'>de son usage personnel</span>"
"  sur la gestion du Graphique avec Qt.<br /><br />");

}
void dico::accueil()
{
ui->listWidgetR->setHidden(true);

fond->setPixmap(QPixmap("k3.png"));
fond->setScaledContents(true);
fond->setGeometry(1,1,520,355);
fond->setHidden(false);

enligne->setGeometry(20,56,130,75);
enligne->setIcon(QIcon("b3.png"));
enligne->setIconSize(QSize(130,130));
enligne->setFlat(true);



enregistrement->setGeometry(20,130,132,75);
enregistrement->setIcon(QIcon("b1.png"));
enregistrement->setIconSize(QSize(130,130));
enregistrement->setFlat(true);


site->setGeometry(148,130,132,75);
site->setIcon(QIcon("b4.png"));
site->setIconSize(QSize(130,130));
site->setFlat(true);


forum->setGeometry(18,206,264,130);
forum->setIcon(QIcon("b2.png"));
forum->setIconSize(QSize(267,224));
forum->setFlat(true);

}

                    //theme fond //

void dico::on_windows()
{
ui->listWidgetR->setHidden(true);

fond->setPixmap(QPixmap("k3.png"));
fond->setScaledContents(true);
fond->setGeometry(1,1,520,355);

enligne->setGeometry(20,56,130,75);
enligne->setIcon(QIcon("b3.png"));
enligne->setIconSize(QSize(130,130));
enligne->setFlat(true);



enregistrement->setGeometry(20,130,132,75);
enregistrement->setIcon(QIcon("b1.png"));
enregistrement->setIconSize(QSize(130,130));
enregistrement->setFlat(true);


site->setGeometry(148,130,132,75);
site->setIcon(QIcon("b4.png"));
site->setIconSize(QSize(130,130));
site->setFlat(true);


forum->setGeometry(18,206,264,130);
forum->setIcon(QIcon("b2.png"));
forum->setIconSize(QSize(267,224));
forum->setFlat(true);


}

void dico::on_mac()
{

ui->listWidgetR->setHidden(true);

fond->setPixmap(QPixmap("fond.png"));
fond->setScaledContents(true);
fond->setGeometry(1,1,520,355);

enligne->setGeometry(20,56,130,75);
enligne->setIcon(QIcon("b3M.png"));
enligne->setIconSize(QSize(130,130));
enligne->setFlat(true);



enregistrement->setGeometry(20,130,132,75);
enregistrement->setIcon(QIcon("b1M.png"));
enregistrement->setIconSize(QSize(130,130));
enregistrement->setFlat(true);


site->setGeometry(148,130,132,75);
site->setIcon(QIcon("b4M.png"));
site->setIconSize(QSize(130,130));
site->setFlat(true);


forum->setGeometry(18,206,264,130);
forum->setIcon(QIcon("b2M.png"));
forum->setIconSize(QSize(267,224));
forum->setFlat(true);


}



                 //Actions theme//


void dico::bleu()
{
        QPalette palette;
        QBrush brush(QColor(125, 171, 255, 255));
        palette.setBrush(QPalette::Active,   QPalette::Window, brush);
        palette.setBrush(QPalette::Active,   QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        setPalette(palette);

}
void dico::bleuciel()
{
        QPalette palette;
        QBrush brush(QColor(195, 210, 222, 255));
        palette.setBrush(QPalette::Active,   QPalette::Window, brush);
        palette.setBrush(QPalette::Active,   QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        setPalette(palette);

}
void dico::rouge()
{
        QPalette palette;
        QBrush brush(QColor(240, 186, 187, 255));
        palette.setBrush(QPalette::Active,   QPalette::Window, brush);
        palette.setBrush(QPalette::Active,   QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        setPalette(palette);

}
void dico::defaut()
{
        QPalette palette;
        QBrush brush(QColor(240, 240, 240, 255));
        palette.setBrush(QPalette::Active,   QPalette::Window, brush);
        palette.setBrush(QPalette::Active,   QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        setPalette(palette);

}


      //bouton son//



void dico::son_on()
{
ui->Buttonson->setHidden(true);
ui->Buttonsonoff->setHidden(false);
}

void dico::son_off()
{
ui->Buttonsonoff->setHidden(true);
ui->Buttonson->setHidden(false);
}

     //  line_ recherche _ ListWidget //

void dico:: recherche()
{

   ui->listWidgetR->setHidden(false);
   ui->listWidgetR->setFocus();


}


void dico:: on_item(QListWidgetItem *)
{

    if(item1->isSelected())
    {
ui->listWidgetR->setHidden(true);
ui->Buttonliste->setHidden(false);
fond->setHidden(true);
photo->setGeometry(230,25,130,170);
photo->setPixmap(QPixmap("gate"));
photo->setScaledContents(true);
ui->lineEdit->setText("Bill Gates");


ui->textBrowser->setText("<br /><br />"
                         "<font  face=verdana size= 3 color=#0A92D3 <h2> <b>.    William Bill Gates </b></h2></font> <br /> "
                          "<ul>"
                          "<li>Date de naissance : 1955 </li>"
                          "<li>Nationalite : américain </li><br />"
                          "Grand  nom de L'Informatique<br />"
                          "Fondateur de Microsoft<br/>"
                          "et principal architecte des logiciels de <br/>"
                          "cette société, leader mondial dans le <br/>"
                          "développement des produits logiciels <br/>"
                          "destinés aux PC.<br/><br/>"
                          "En 1998, B.Gates désigne Steve Ballmer,alors vice-président<br/> "
                          "de l’entreprise, au poste de PDG, En 2000, Gates abandonne <br/> "
                          "cette dernière fonction à S. Ballmer pour se consacrer<br/> "
                          "au développement de nouveaux produits et de nouvelles technologies.<br/>");



    }

        if(item2->isSelected())
    {

               ui->listWidgetR->setHidden(true);
               ui->Buttonliste->setHidden(false);
               fond->setHidden(true);
               photo->setGeometry(250,25,130,170);
               photo->setPixmap(QPixmap("steve"));
               photo->setScaledContents(true);
               ui->lineEdit->setText("Steve Jobs");

   ui->textBrowser->setText("<br /><br />"
                         "<font  face=verdana size= 3 color=#0A92D3 <h2> <b>.  Steve jobs </b></h2></font> <br /> "
                          "<ul>"
                          "<li>Date de naissance : ___ </li>"
                          "<li>Nationalite : américain </li><br />"
                          "Cofondateur de la société Apple <br />"
                          "Computer <br />"
                          " (devenue Apple Incorporation) <br />"
                          " et fondateur de la société NeXT,<br />"
                          "Steve Jobs est à l'origine du système <br />"
                          "  d'exploitation Mac OS X,<br />"
                          " qui regroupe des technologies  <br />"
                          "  issues des deux entreprises.    <br />"

                          );

    }

            if(item3->isSelected())
    {
        ui->listWidgetR->setHidden(true);
        ui->Buttonliste->setHidden(false);
        fond->setHidden(true);
        photo->setGeometry(240,25,155,170);
        photo->setPixmap(QPixmap("hawking"));
        photo->setScaledContents(true);
        ui->lineEdit->setText("Stephen Hawking");

        ui->textBrowser->setText("<br /><br />"
                         "<font  face=verdana size= 3 color=#0A92D3 <h2> <b>. William Stephen Hawking </b></h2></font> <br /> "
                          "<ul>"
                          "<li>Date de naissance : 1942 </li>"
                          "<li>Nationalite : Britannique</li><br /><br />"
                          "physicien théoricien britannique, <br />"
                          "surtout connu pour ses tentatives <br />"
                          " d'unification  de la relativité <br />"
                          "générale et de la théorie quantique. <br /><br />"
                          "De ses travaux, il résulte que la théorie de la relativité générale,<br />"
                          "si elle est vraie, est cohérente avec celle du big-bang sur la création de l'Univers.<br />"
                          "  Il apparaîtrait en outre que le big-bang provient d'une singularité,<br />"
                          "  ou d'un point de distorsion infinie de l'espace-temps, une idée que Hawking<br />"
                          " devait affiner par la suite. <br /> "
                          " Il est l'auteur d'un livre de vulgarisation intitulé Une brève histoire du temps (1988).<br />"
                          "  Hawking a toujours dû, parallèlement à son activité scientifique,  mener une dure bataille <br />"
                          "  contre la maladie incurable dont il est atteint, <br />"
                          "  une sclérose latérale amyotrophique. <br />"

                          );



    }



            if(item4->isSelected())
    {

     ui->listWidgetR->setHidden(true);
     ui->Buttonliste->setHidden(false);
     fond->setHidden(true);
     photo->setGeometry(240,25,140,170);
     photo->setPixmap(QPixmap("wozniak"));
     photo->setScaledContents(true);
     ui->lineEdit->setText("Steve Wozniak");

     ui->textBrowser->setText("<br /><br />"
                         "<font  face=verdana size= 3 color=#0A92D3 <h2> <b>. Stephen Wozniak Gary </b></h2></font> <br /> "
                          "<ul>"
                          "<li>Date de naissance : 1950</li>"
                          "<li>Nationalite : americain </li><br />"
                          "informaticien américain,  <br />"
                          "constructeur du premier <br />"
                          " micro-ordinateur Apple. Né  <br />"
                          " en Californie, il y fit ses études <br />"
                          " ainsi qu'à l'université de Berkeley. <br /> "
                          " Après avoir abandonné ses études,<br /> "
                          "  Wozniak travailla pour Hewlett-Packard <br />"
                          " et passa tout son temps libre en compagnie d'autres jeunes passionnés d'informatique au <br />"
                          " club Homebrew Computer de Palo Alto.<br />"
                          "Après avoir quitté Apple, Wozniak obtint sa licence en science informatique et en ingénierie <br />"

                          " électrique de l'université de Californie à Berkeley et y enseigna comme bénévole. <br />"


                          );

   }



            if(item5->isSelected())
    {

         ui->listWidgetR->setHidden(true);
         ui->Buttonliste->setHidden(false);
         fond->setHidden(true);

    }


            if(item6->isSelected())
    {
         ui->listWidgetR->setHidden(true);
         ui->Buttonliste->setHidden(false);
         fond->setHidden(true);


    }



            if(item7->isSelected())
    {
         ui->listWidgetR->setHidden(true);
         ui->Buttonliste->setHidden(false);
         fond->setHidden(true);

    }



}




//****************FIN*****************//
//**** DIKI-SMART ****//
dico::~dico()
{
    delete ui;
}
