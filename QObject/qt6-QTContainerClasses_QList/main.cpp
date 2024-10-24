#include <QCoreApplication>
#include<QDebug>
#include<QList>
#include<QMap>
#include<QStringList>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QMap<QString, int>record;
    for(int i = 1; i<4; i++){
        record["Person" + QString::number(i)] = i;
    }
    if(record.find("Person8") != record.end()){
        qInfo()<<"Person found at :"<<record["Person1"]<<" position";
    }
    else{
        qInfo()<<"Person not found";
        record["Person"]++;
    }
    for(auto it = record.begin(); it!= record.end(); ++it){
        qInfo()<<it.key()<<" "<<it.value();
    }

    qInfo()<<"keys :"<<record.keys();
    qInfo()<<"values :"<<record.values();

    qInfo()<<"Person 1 is :"<<record["Person1"]<<" years old";

    foreach(QString key, record.keys()){
        qInfo()<<key<<" "<<record[key];
    }

    QStringList names;

    names<<"Narendra"<<"Amit"<<"Nitin"<<"Rahul";

    names.replaceInStrings("Rahul", "Ryan");
    //names.replaceInStrings("i", "@");

    for(auto &n: names){
        qInfo()<<n;
    }
    QString people = names.join(",");
    qInfo()<<people;


    QStringList mypeople = names.filter("N");
    qInfo()<<mypeople;

    QString me = "Ashutosh";
    qInfo()<<"Contains:"<< names.contains(me);
    qInfo()<<"Contains:"<< names.contains("Amit");
    qInfo()<<"Index :"<<names.indexOf("Amit");
    qInfo()<<"name :"<< names.at(names.indexOf("Amit"));

    return a.exec();
}
