#ifndef TOY_H
#define TOY_H

#include <QObject>
#include<QDebug>

class toy : public QObject
{
    Q_OBJECT
public:
    explicit toy(QObject *parent = nullptr);
    ~toy();

signals:
};

#endif // TOY_H
