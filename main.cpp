#include "timerlapapp.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TimerLapApp w;
    w.show();

    return a.exec();
}
