#include <QtGui/QApplication>
#include "WebWindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    WebWindow w;
    w.show();
    
    return a.exec();
}
