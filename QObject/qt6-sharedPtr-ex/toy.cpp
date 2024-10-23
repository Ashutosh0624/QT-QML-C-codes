#include "toy.h"

toy::toy(QObject *parent)
    : QObject{parent}
{
    qInfo()<<"Constructor";
}

toy::~toy()
{
    qInfo()<<"Deconstructor";
}
