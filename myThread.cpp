#include "myThread.h"
#include "control.h"

MyThread::MyThread(QString s)
{
    videoProcess = new QProcess();
    fileName = s;
}


void MyThread::run()
{
    //QProcess videoProcess;
    QString program = "/bin/bash";

    QStringList arguments;
    //QString outputFileName = fileName + ".mpg";

    arguments << "/home/thomas/Desktop/Projet V6 OK/video/transcode.sh" << fileName;
    videoProcess->start(program, arguments);

}
