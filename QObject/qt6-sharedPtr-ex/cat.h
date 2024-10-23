#ifndef CAT_H
#define CAT_H

#include <QObject>
#include<QDebug>
#include"toy.h"

class cat : public QObject
{
    Q_OBJECT
public:
    explicit cat(QObject *parent = nullptr);
    ~cat();

    void play(QSharedPointer<toy>toy);


private:
    QSharedPointer<toy>m_toy;

signals:

};

#endif // CAT_H
