#include "recievetestmessage.h"

recieveTestMessage::recieveTestMessage(QObject *parent)
    : QObject{parent}
{}

void recieveTestMessage::recieveMessage(QString message)
{
    qInfo() << message;
}
