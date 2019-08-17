#ifndef TIMERLAPAPP_H
#define TIMERLAPAPP_H

#include <QMainWindow>

namespace Ui {
class TimerLapApp;
}

class TimerLapApp : public QMainWindow
{
    Q_OBJECT

public:
    explicit TimerLapApp(QWidget *parent = nullptr);
    ~TimerLapApp();

private:
    Ui::TimerLapApp *ui;
};

#endif // TIMERLAPAPP_H
