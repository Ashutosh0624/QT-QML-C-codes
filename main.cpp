#include <QCoreApplication>
#include<QDebug>
#include"test.h"
#include"recievetestmessage.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // Set up code that uses the Qt event loop here.
    // Call a.quit() or a.exit() to quit the application.
    // A not very useful example would be including
    // #include <QTimer>
    // near the top of the file and calling
    // QTimer::singleShot(5000, &a, &QCoreApplication::quit);
    // which quits the application after 5 seconds.

    // If you do not need a running Qt event loop, remove the call
    // to a.exec() or use the Non-Qt Plain C++ Application template.
    test t1;
    recieveTestMessage r1;
    QObject::connect(&t1, &test::greetMessage, &r1, &recieveTestMessage::recieveMessage);
    t1.sendMessage("Hello world");


    return a.exec();
}
