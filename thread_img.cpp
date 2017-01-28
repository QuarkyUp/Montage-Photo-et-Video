#include "thread_img.h"
#include "control.h"
#include "view.h"

thread_img::thread_img(QObject *parent, Control *control, View *view, int id)
{
    this->control=control;
    this->view=view;
    id_thread=id;
}


void thread_img::run()
{
    QGraphicsScene *scene1=new QGraphicsScene;

    //avoid view->getter list bug
    QGraphicsItem *item=view->getListItem().at(id_thread);

    view->ajust_Position(id_thread);

    item->setEnabled(false);
    scene1->addItem(item);

    QRectF RectF=scene1->itemsBoundingRect();

    QImage Imagetoprocess(RectF.size().toSize(), QImage::Format_ARGB32_Premultiplied);
    QPainter Paint;

    Paint.begin(&Imagetoprocess); //beging paint device
    Paint.setRenderHint(QPainter::HighQualityAntialiasing, true);

    scene1->render(&Paint); //render target
    Paint.end(); //ends painting

    QRgb* Color;
    int Gray;
    QPixmap final_Image;


    for(int i=0; i<Imagetoprocess.height(); i++)
    {
        uchar* scan=Imagetoprocess.scanLine(i);
        int depth=4;

        for(int j=0; j<Imagetoprocess.width(); j++)
            {
                Color=reinterpret_cast<QRgb*>(scan+j*depth);
                Gray=qGray(*Color);
                *Color=QColor(Gray, Gray, Gray).rgba();
            }
        }

     final_Image=QPixmap::fromImage(Imagetoprocess);
     view->show_Image(final_Image);
}

