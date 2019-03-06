#include "FormatConvertor.h"

#include <QApplication>

#pragma comment(linker, "/subsystem:windows /entry:mainCRTStartup")

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    FormatConvertor fc;
    fc.show();

    return a.exec();
}