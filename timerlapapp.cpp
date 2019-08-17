#include "timerlapapp.h"
#include "ui_timerlapapp.h"

TimerLapApp::TimerLapApp(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TimerLapApp)
{
    ui->setupUi(this);
}

TimerLapApp::~TimerLapApp()
{
    delete ui;
}
