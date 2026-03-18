#include "components/gui/masterwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MasterWindow w;
    w.show();
    return QCoreApplication::exec();
}
