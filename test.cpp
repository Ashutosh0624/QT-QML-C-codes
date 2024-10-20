#include "test.h"

test::test(QObject *parent)
    : QObject{parent}
{}

void test::sendMessage(QString message)
{
    this->m_message = message;
    emit greetMessage(m_message);
}
