#include "cat.h"

cat::cat(QObject *parent)
    : QObject{parent}
{
    qInfo()<<"constructor";
}

cat::~cat()
{
    qInfo()<<"Deconstructor";
}

void cat::play(QSharedPointer<toy>toy)
{
    m_toy.swap(toy);
    qInfo()<<this<<"Playing with: "<<m_toy.data();

}
