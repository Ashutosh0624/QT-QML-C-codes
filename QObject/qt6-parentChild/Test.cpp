#include "Test.h"

Test::Test(QObject *parent, QString name)
    : QObject{parent}
{

    setObjectName(name);
    qInfo()<<"Constructed";

}

Test::~Test()
{
    qInfo()<<"Destructor";
}
