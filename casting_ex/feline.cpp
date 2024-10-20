#include "feline.h"
#include <qdebug.h>

feline::feline(QObject *parent)
    : QObject{parent}
{}

void feline::meow()
{
    qInfo()<<"meow";
}

void feline::hiss()
{
    qInfo()<<"Hiss";
}
