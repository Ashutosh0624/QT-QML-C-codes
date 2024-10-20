#include "racecar.h"

racecar::racecar(QObject *parent)
    : car()
{}

void racecar::goFast()
{
    qInfo()<<"going fast";
}
