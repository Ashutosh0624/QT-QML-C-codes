#include <QCoreApplication>
#include<QDebug>
#include"car.h"
#include"racecar.h"
#include"feline.h"

/*
 * Dynamic cast: dynamic casr can be only used with pointers and references to objects.
 * Its purpose is to ensure that the result of the type conversion is a valid complete object
 * the dynamic_cast operator ensures that if you convert a pointer to class A to a pointer to class B,
 * the object of A pointed by former belongs to an object of type B or class derived  from B as a base class subobject.
*/
void testDrive(car * obj){
    obj->drive();
    obj->stop();
}

void race(racecar *obj){
    obj->drive();
    obj->stop();
    obj->goFast();
}

// Objective : to put race car im a test drive

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    racecar *player1 = new racecar(&a);
    testDrive(player1);    // Implicit conversion


    // correct way
    car *obj = dynamic_cast<car*>(player1) ;  // player 1 is converted to a pointer to a car using dynamic cast , uplcasting
    // Explicitly convert
    if(obj) testDrive(obj);
    racecar *obj1 = dynamic_cast<racecar *>(obj);
    obj1->drive();
    if(obj1)testDrive(obj1);
    feline * cat= new feline(&a);
    car *catcar = dynamic_cast<car *>(cat);
    catcar->drive();
    return a.exec();
}
