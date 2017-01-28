#include "MyThread_Merge.h"

MyThread_Merge::MyThread_Merge(QStringList s)
{
    videoProcess = new QProcess();
    fileList = s;
}


void MyThread_Merge::run()
{
    QStringList concatList;
    QString concatString = "";

    for(int i = 0; i < fileList.length(); i++){
        concatList.append(QString(fileList.at(i)+".mpg"));
        qDebug()<< concatList.at(i);
    }

    for(int i = 0; i < concatList.length(); i++){
        if(i == concatList.length() - 1){
            concatString.append(concatList.at(i));
        } else {
            concatString.append(QString(concatList.at(i)+"|"));
        }
    }
    qDebug() << concatString;


    QString program = "/bin/bash";
    QStringList arguments;

    arguments << "/home/thomas/Desktop/Projet V6 OK/video/merge.sh" << concatString;
    videoProcess->start(program, arguments);

}
