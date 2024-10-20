#ifndef RECIEVETESTMESSAGE_H
#define RECIEVETESTMESSAGE_H

#include <QObject>
#include<QDebug>

class recieveTestMessage : public QObject
{
    Q_OBJECT
public:
    explicit recieveTestMessage(QObject *parent = nullptr);

signals:

public slots:
    void recieveMessage(QString message);
};

#endif // RECIEVETESTMESSAGE_H
