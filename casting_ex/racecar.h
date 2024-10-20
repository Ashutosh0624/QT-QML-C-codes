#ifndef RACECAR_H
#define RACECAR_H

#include "car.h"
#include <QObject>

class racecar : public car
{
    Q_OBJECT
public:
    explicit racecar(QObject *parent = nullptr);
    bool supercharger = true;
    void goFast();

signals:
};

#endif // RACECAR_H
