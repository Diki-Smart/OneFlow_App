#include <QtGui/QApplication>
#include "dico.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    dico w;
    w.show();
    return a.exec();
}
