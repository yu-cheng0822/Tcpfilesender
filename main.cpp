#include "tcpfilesender.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Tcpfilesender w;
    w.show();
    return a.exec();
}
