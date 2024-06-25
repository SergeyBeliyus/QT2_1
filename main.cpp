#include <QCoreApplication>
#include <QtSql/qsqldatabase.h>
#include <QtNetwork/qtcpsocket.h>

#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QTcpSocket* socket;
    std::cout << "Ready" << std::endl;
    return a.exec();
}
