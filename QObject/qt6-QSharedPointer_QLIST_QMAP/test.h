#ifndef TEST_H
#define TEST_H

#include <QObject>
#include<QDebug>>

class test : public QObject
{
    Q_OBJECT
public:
    explicit test(QObject *parent = nullptr, QString name =" ");
    ~test();

signals:
};

#endif // TEST_H
