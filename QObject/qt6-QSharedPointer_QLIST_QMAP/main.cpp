#include <QCoreApplication>
#include<QSharedPointer>
#include<QList>
#include"test.h"

typedef QMap<QString, QSharedPointer<test>> TestMap;

void testMapAuto(){
    TestMap map;

    for(int i = 0; i<5; i++){
        QString id = "ID-" + QString::number(i);
        QString name = "Item-" + QString::number(i);
        QSharedPointer<test>ptr(new test(nullptr, name));
        map.insert(id, ptr);
    }
    foreach(QString item, map.keys()){
        qInfo()<<item<<map[item].data();
    }

    map.clear();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QList<QSharedPointer<test>>list;

    for(int i=0; i<5; i++){
        QSharedPointer<test>item(new test);
        list.append(item);
    }
    foreach(QSharedPointer<test>ptr,list) {
        qInfo()<<ptr.data();
    }
    qInfo()<<"remove one item";

    list.removeAt(0);
    qInfo()<<"clearing";
    list.clear();

    // QMap with QSharedpointer
    testMapAuto();


    return a.exec();
}
