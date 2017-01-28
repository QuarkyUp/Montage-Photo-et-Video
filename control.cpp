#include "control.h"
#include "view.h"
#include "model.h"
#include "myThread.h"
#include "MyThread_Merge.h"

using namespace cv;

Control::Control(Model *model, View *view) :
    view(view)
{
    this->model=model;
    view->setControl(this);

    videoProcess = new QProcess();
}

Control::~Control()
{
    delete videoProcess;

    for(unsigned int i=0; i<ListThread.size(); i++)
    {
        delete ListThread.at(i);
    }
}

////////////////////////IMAGE///////////////////////////////////////////
////////////////////////////////////////////////////////////////////////

void Control::read_File(QString fileName)
{
    view->show_Image(model->loadPixmapImage(fileName));
}


void Control::GreyscaleImgControl(QImage bwImage)
{
    QRgb* Color;
    int Gray;
    QPixmap final_Image;

    for(int i=0; i<bwImage.height(); i++)
    {

        uchar* scan=bwImage.scanLine(i);
        int depth=4;

        for(int j=0; j<bwImage.width(); j++)
        {

            Color=reinterpret_cast<QRgb*>(scan+j*depth);
            Gray=qGray(*Color);
            *Color=QColor(Gray, Gray, Gray).rgba();
        }
    }

    final_Image=QPixmap::fromImage(bwImage);
    view->show_Image(final_Image);
}


void Control::Save_Image(QString NameFile, QImage ImagetoSave)
{
    QPixmap PixMapImage;

    model->SaveModImage(NameFile, ImagetoSave);

    PixMapImage.convertFromImage(ImagetoSave);
    view->show_Image(PixMapImage);
}


void Control::allGrayscale(QList <QGraphicsItem *> ListItems)
{
    ListItems=view->getListItem();

    for(int i=0; i<ListItems.size(); i++)
    {
        thread_img *thread=new thread_img(NULL, this, this->view, i);
        ListThread.push_back(thread);
    }

    for(int i=0; i<ListItems.size(); i++)
    {
        view->getPosition()=ListItems[i]->scenePos();

        ListThread[i]->run();
    }

    for(int i=0; i<ListItems.size(); i++)
    {
        ListThread[i]->wait();
    }



    view->cleanListforThread();
    view->threadStatusBar();
}


void Control::convertForPeleMele(QImage Image)
{
    QPixmap PixMapImage;
    PixMapImage.convertFromImage(Image);

    view->show_Image(PixMapImage);
}

////////////////////////VIDEO///////////////////////////////////////////
///////////////////////////////////////////////////////////////////////

void Control::readFileVideo(QString fileName){
    view->setVideoInputLineEdit(fileName);
    view->appendVideoFileListTextEdit(fileName);
    model->videoFileList.append(fileName);
}

void Control::startConversion(){
    QString videoProgram = "D:/00 - Logiciels/ffmpeg-20161103-3932ccc-win64-static/bin/ffmpeg";
    QStringList argumentVideoTranscoding;
    QStringList argumentMerge;
    int videoFileListLength = model->videoFileList.length();

    if(model->videoFileList.isEmpty()) {
        view->createQMessageBox();
        return;
    }

    MyThread* thread[videoFileListLength];
    for(int i = 0; i < videoFileListLength; i++){
        thread[i] = new MyThread(model->videoFileList.at(i));
    }

    for(int i = 0; i < videoFileListLength; i++){
        thread[i]->run();
        qDebug()<<"test0";
    }

    for(int i = 0; i < videoFileListLength; i++){
        thread[i]->wait();
    }

    MyThread_Merge* thread_merge = new MyThread_Merge(model->videoFileList);
    thread_merge->run();
    thread_merge->wait();

    /*
    for(int i = 0; i < videoFileListLength; i++) {
        argumentVideoTranscoding << "-i" << model->videoFileList.at(i) << "-qscale:v" << "25" << QString("inter%1.mpg").arg(i);
        videoProcess->start(videoProgram, argumentVideoTranscoding);
        delay(3500);
        videoProcess->close();
        argumentVideoTranscoding.clear();
    }

    QString concatString = "concat:";
    for(int i = 0; i < videoFileListLength;i++) {
        if (i == videoFileListLength - 1) {
            concatString.append(QString("inter%1.mpg").arg(i));
        } else {
            concatString.append(QString("inter%1.mpg|").arg(i));
        }
    }
    argumentMerge << "-i" << concatString << "-c" << "copy" << "output.mpg";
    videoProcess->start(videoProgram, argumentMerge);
    argumentMerge.clear();
*/
}

void Control::delay( int millisecondsToWait )
{
    QTime dieTime = QTime::currentTime().addMSecs( millisecondsToWait );
    while( QTime::currentTime() < dieTime )
    {
        QCoreApplication::processEvents( QEventLoop::AllEvents, 100 );
    }
}
