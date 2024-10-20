#ifndef TEST_H
#define TEST_H

#include <QObject>

class test : public QObject
{
    Q_OBJECT
    QString m_message;
public:
    explicit test(QObject *parent = nullptr);

    void sendMessage(QString message);

signals:
    void greetMessage(QString message);
};

#endif // TEST_H
