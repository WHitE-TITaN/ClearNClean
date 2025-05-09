#include "smartfolder.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SmartFolder w;
    w.show();
    return a.exec();
}
