/*
 * QSharedPointer : similar to std::shared_pointer<> of c++
 * Allows multiple pointers to share ownership of an object
 */

#include <QCoreApplication>
#include<QScopedPointer>
#include<QSharedPointer>
#include<QDebug>
#include"cat.h"
#include"toy.h"
#include<vector>

void test(){
    int max = 5;
    QSharedPointer<toy>ntoy(new toy);
    std::vector<QSharedPointer<cat>> cats(max);

    for(int i=0; i<max; i++){
        cats[i].reset(new cat);
        cats[i]->play(ntoy);
    }

    qInfo()<<"All cats are done";
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    test();

    return a.exec();
}
