#include "test.h"

test::test(QObject *parent, QString name)
    : QObject{parent}
{}

test::~test()
{
    qInfo() <<"Deconstructed";
}
