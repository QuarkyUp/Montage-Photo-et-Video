#include "view.h"
#include "ui_view.h"
#include "control.h"
#include <QCloseEvent>

View::View(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::View)
{
    ui->setupUi(this);

    scene=new QGraphicsScene(this); //load new scene
    IncZ=0;

    connect(ui->actionImport_Image_File, SIGNAL(triggered()), this, SLOT(readFile()));
    connect(ui->actionGreyscale_single_image, SIGNAL(triggered()), this, SLOT(GreyscaleImg()));
    connect(ui->actionFirst_Plan, SIGNAL(triggered()), this, SLOT(TopPosition()));
    connect(ui->actionBackground, SIGNAL(triggered()), this, SLOT(Background()));
    connect(ui->actionErase_Image, SIGNAL(triggered()), this, SLOT(EraseImage()));
    connect(ui->actionSave_Image, SIGNAL(triggered()), this, SLOT(SaveImage()));
    connect(ui->actionPele_Mele, SIGNAL(triggered()), this, SLOT(peleMele()));
    connect(ui->actionExit_program, SIGNAL(triggered()), this, SLOT(ExitProgram()));
    connect(ui->actionNew_Project, SIGNAL(triggered()), this, SLOT(newProject()));
    connect(ui->actionGrayscale_all_images, SIGNAL(triggered()), this, SLOT(allGrayscale()));
    connect(ui->actionSelect, SIGNAL(triggered()), this, SLOT(Selection()));
}


View::~View()
{
    delete control;
    delete PixMapItem;
    delete scene;
    delete Item;

    for(int i=0; i<ListItems.size(); i++)
    {
        delete ListItems[i];
    }



    delete ui;
}

////////////////////////IMAGE///////////////////////////////////////////
///////////////////////////////////////////////////////////////////////


void View::readFile()
{
    fileName=QFileDialog::getOpenFileName(this, tr("Open Image"), "/home/thomas/Desktop/Projet V6 OK",
                                        tr("Image Files(*.png *.jpg *.bmp)"));

    if(fileName==NULL) //if pressed "cancel button", returns null
    {
        ui->statusBar->showMessage("Import image failed...", 2000);
        return;
    }

    control->read_File(fileName);
}


void View::show_Image(QPixmap Image)
{
    qDebug()<<"6.IN VIEW";

    PixMapItem=new QGraphicsPixmapItem();
    PixMapItem->setPixmap(Image); //set item's pixmap

    PixMapItem->setFlag(QGraphicsItem::ItemIsMovable);
    PixMapItem->setFlag(QGraphicsItem::ItemIsSelectable);
    PixMapItem->setFlag(QGraphicsItem::ItemIsFocusable); //Key event

    ListItems.push_back(PixMapItem); //add items from Image to list

    scene->addItem(PixMapItem); //load item to scene
    PixMapItem->setPos(Position);
    PixMapItem->setZValue(IncZ);
    IncZ++;

    //qDebug()<<"ZVal in scene"<<m_Zval;

    ui->graphicsView->setScene(scene);
    ui->statusBar->showMessage("Import image successful...", 2000);

    scene->update();
    qDebug()<<"My ListItem"<<ListItems;
}


bool View::Selection()
{
    if(ListItems.count()>0)
    {
        if(scene->selectedItems().count()!=0)//avoids one of the biggest bug on the program
        {                               //this line avoids empty selection crash from user

            Item=((scene->selectedItems()).first());

            Position=Item->mapFromScene(pos());

            ui->statusBar->showMessage("Image selected...", 2000);
            scene->update();

            return true;
        }

        else
            return false;
    }

    else
    {
        QMessageBox::warning(ui->graphicsView, "Warning", "<strong>You don't have any image in the project! <strong>");
        return false;
    }
}


void View::TopPosition()
{
    if(ListItems.size()>0)
    {
        if(Selection())
        {
            Item->setZValue(100);
            ui->statusBar->showMessage("Image selected in first plan...", 2000);
            scene->update();
        }

        else
            QMessageBox::warning(ui->graphicsView, "Warning", "You have to select an image!");
     }

    else
      QMessageBox::warning(ui->graphicsView, "Warning", "<strong>You don't have any image in the project! <strong>");

}


void View::Background()
{
    if(ListItems.size()>0)
    {
        if(Selection())
        {
            Item->setZValue(-1);
            ui->statusBar->showMessage("Image selected in background...", 2000);
            scene->update();
        }

        else
            QMessageBox::warning(ui->graphicsView, "Warning", "You have to select an image!");
    }
    else
      QMessageBox::warning(ui->graphicsView, "Warning", "<strong>You don't have any image in the project! <strong>");

}


void View::cleanListforThread()
{
    for(int i=0; i<=ListItems.count()/2; i++)
    {
        ListItems.removeFirst();
    }
    scene->update();
}


void View::EraseImage()
{   
    if(ListItems.count()>0 && Selection())
    {
        ListItems.removeOne(Item); //remove from stack
        scene->removeItem((scene->selectedItems()).first()); //remove from scene

        ui->statusBar->showMessage("Delete image successful...", 2000);
        scene->update();
    }

    else if(ListItems.isEmpty())
    {
        QMessageBox::warning(ui->graphicsView, "Warning", "<strong>You don't have any image in the project! <strong>");
        return;
    }

    else if(!Selection())
    {
        QMessageBox::warning(ui->graphicsView, "Warning", "You have to select an image!");
        return;
    }
}


void View::GreyscaleImg()
{
    if(Selection())
    {
        Position=Item->scenePos(); //get position of item in the scene
        IncZ=Item->zValue();

        //hide rubber band provoked by ItemIsSelectionable in show_Image()
        Item->setEnabled(false); //it took a long time to write this

        QGraphicsScene *scene1=new QGraphicsScene; //scene to focus on the select item
        scene1->addItem(Item);

        QRectF RectF=scene1->itemsBoundingRect(); //get the size of item

        //item into new Image with fixed size
        QImage Imagetoprocess(RectF.width(), RectF.height(), QImage::Format_ARGB32_Premultiplied);
        QPainter Paint; //avoids destruction of image

        Paint.begin(&Imagetoprocess); //beging paint device
        Paint.setRenderHint(QPainter::HighQualityAntialiasing, true);

        scene1->render(&Paint); //render target

        control->GreyscaleImgControl(Imagetoprocess); //into process

        ui->statusBar->showMessage("Greyscale on image successful...", 2000);
        Paint.end(); //ends painting
        delete scene1;
    }

    else
        {
            QMessageBox::warning(ui->graphicsView, "Warning", "You have to select an image!");
        }
}


QPointF View::ajust_Position(int i)
{
    Position=ListItems[i]->scenePos();
    qDebug()<<"Position for item"<<i<<"is"<<Position;

    return Position;
}


void View::SaveImage()
{
    if(Selection())
    {
        QPainter Paint;
        QGraphicsItem *temp;
        QGraphicsScene *scene1=new QGraphicsScene;

        temp=Item;
        ListItems.removeOne(Item);

        Position=temp->scenePos();

        temp->setEnabled(false);
        scene1->addItem(Item);

        QRectF RectF=scene1->itemsBoundingRect();

        QImage ImagetoSave(RectF.width(), RectF.height(),QImage::Format_ARGB32);

        Paint.begin(&ImagetoSave);
        Paint.setRenderHint(QPainter::HighQualityAntialiasing);
        scene1->render(&Paint);

        fileName=QFileDialog::getSaveFileName(this, tr("Save File"), fileName,
                                tr("Images (*.bmp);;Images (*.png);;Images (*.jpg)"));

        if(fileName==0)
        {
            QMessageBox::warning(ui->graphicsView, "Warning", "Your image isn't save!");
            show_Image(QPixmap::fromImage(ImagetoSave));
        }

        control->Save_Image(fileName, ImagetoSave);

        ui->statusBar->showMessage("Image saved...", 2000);
        scene->update();

        Paint.end();
        delete scene1;
    }

    else if(!Selection())
    {
        ui->statusBar->showMessage("Saving image failed...", 2000);
        QMessageBox::warning(ui->graphicsView, "Warning", "You have to select an image!");
        //return;
    }
}


void View::peleMele()
{
    if(ListItems.size()!=0)
    {
        QRectF RectF=scene->sceneRect();

        QImage ImPeleMele(RectF.width(), RectF.height(), QImage::Format_ARGB32_Premultiplied);

        QPainter Paint;
        Paint.begin(&ImPeleMele);
        Paint.setRenderHint(QPainter::HighQualityAntialiasing);
        scene->render(&Paint);

        control->convertForPeleMele(ImPeleMele);

        ui->statusBar->showMessage("Pele mele successful...", 2000);
        Paint.end();
     }

    else
    {
        QMessageBox::information(ui->graphicsView, "Information", "You must have at least 1 image to do this action!");
    }
}


void View::newProject()
{
    if(ListItems.count()>0)
    {
        ListItems.clear(); //remove from the stack
        delete scene;

        scene=new QGraphicsScene(this);
        IncZ=0;
        ui->statusBar->showMessage("All images deleted, this is an empty project...", 2000);
    }

    else
        QMessageBox::information(ui->graphicsView, "Information", "<strong>Your project is already empty! <strong>");
}


void View::allGrayscale()
{
    control->allGrayscale(ListItems);
}


void View::saveAll()
{
    int SizeList=ListItems.count();
    QPainter Paint;
    QString path;

    for(int i=0; i<SizeList; i++)
    {
        QGraphicsScene *scene1=new QGraphicsScene;

        Item=ListItems.at(i);
        Position=Item->scenePos();
        ListItems.at(i)->setEnabled(false);

        scene1->addItem(Item);

        QRectF RectF=scene1->itemsBoundingRect();

        QImage ImagetoSave(RectF.width(), RectF.height(),QImage::Format_ARGB32);

        Paint.begin(&ImagetoSave);
        Paint.setRenderHint(QPainter::HighQualityAntialiasing);
        scene1->render(&Paint);

        path="/home/thomas/Desktop/Projet V6 OK/Image_Export/Image_"+QString::number(i+1)+".jpg";

        control->Save_Image(path, ImagetoSave);

        Paint.end();
        delete scene1;
    }

    ui->statusBar->showMessage("All images are saved...", 2000);
}


void View::ExitProgram()
{
    int option1, option2;

    if(ListItems.count()>0)
    {

    option1=QMessageBox::warning(this, "Exit", "Do you want to save your images before ending the program?",
                         QMessageBox::No | QMessageBox::Yes);

        if(option1==QMessageBox::Yes)
        {
            saveAll();
            QMessageBox::information(this, "Saved", "All your images were save");

            exit(1);
        }

        else if(option1==QMessageBox::No)
        {
            option2=QMessageBox::warning(this, "Exit", "Are you sure you don't want to save you images?",
                                         QMessageBox::No | QMessageBox::Yes);

            if(option2==QMessageBox::Yes)
            {
                exit(1);
            }

            else if(option2==QMessageBox::No)
            {
                saveAll();
                QMessageBox::information(this, "Saved", "All your images were save");

                exit(1);
            }
        }
    }
    else
        exit(1);
}


void View::threadStatusBar()
{
    ui->statusBar->showMessage("Thread greyscale successful...", 2000);
}


void View::closeEvent(QCloseEvent *event) //override closeEvent method from QMainWindow
{
    QMessageBox::StandardButton exit=QMessageBox::question(this, tr("Exit Program"), tr("Do you want to end the program?"),
                                                      QMessageBox::No |
                                                      QMessageBox::Yes);
    if(exit!=QMessageBox::Yes)
    {
        event->ignore();
    }

    else
    {
        if(ListItems.size()>0)
        {
                int Ask;
                Ask=QMessageBox::question(this, tr("Save all images"), tr("Do you want to save all your images?"),
                                      QMessageBox::No |
                                      QMessageBox::Yes);

                if(Ask==QMessageBox::Yes)
                {
                    saveAll();
                    event->accept();
                }

                else
                    event->accept();
        }
        else
            event->accept();
    }
}


////////////////////////VIDEO///////////////////////////////////////////
///////////////////////////////////////////////////////////////////////

void View::on_videoFileOpenButton_clicked(){
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"), "/home/thomas/Desktop/Projet V6 OK/video", tr("videos (*.mp4 *.mov *.avi *.mkv)"));
    control->readFileVideo(fileName);
}

void View::on_videoStartButton_clicked(){
    control->startConversion();
}

void View::setVideoInputLineEdit(QString text){
    ui->videoInputLineEdit->setText(text);
}

void View::appendVideoFileListTextEdit(QString text){
    ui->videoFileListTextEdit->append(text);
}

void View::createQMessageBox(){
    QMessageBox::information(this, tr("ERROR"), tr("Input list is empty !"));
}
