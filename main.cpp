#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QDebug>
#include <QQmlContext>



int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;

    QSysInfo *infoSO= new QSysInfo() ;  // aggiungendo nel file .pro QT+=core non devo fare l'include della classe
    qDebug ()<< "info kernel" << infoSO->kernelType();
    qDebug ()<< "kernel version" << infoSO->kernelVersion();
    qDebug ()<< "cpu  architecture" << infoSO->currentCpuArchitecture();
    qDebug ()<< "hostName"          << infoSO->machineHostName();
    qDebug ()<< "productVersion"    << infoSO->productVersion();
    qDebug ()<< "productType"       << infoSO->productType();
    qDebug ()<< "buildAbi"          << infoSO->buildAbi();

    QString verSO= infoSO->productType()+" "+infoSO->productVersion();
    engine.rootContext()->setContextProperty("InfoSO",verSO);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
