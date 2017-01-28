#ifndef CONTROL_H
#define CONTROL_H

/**
 * \file control.h
 * Controler of MVC
 *
 */

#include "libraries.h"
#include "thread_img.h"

class Model;
class View;

/*!
 * \brief The Control class The Control class of our MVC, which points to the Model and View classes.
 * Its role is to manipulate our data and do specifics treatments.
 */
class Control
{
private:
    Model *model;
    View *view;
    std::vector <thread_img *> ListThread;
    QPixmap img_pixmap;

public:
    Control(Model *model, View *view);
    ~Control();

//////////////////IMAGE//////////////////////////////////

    /*!
     * \brief This function is called by the private slot readFile() from view.
     * It show the QPixmap Image which has been loaded in the loadPixmapImage from
     * the class Model.
     * \param fileName QString
     */
    void read_File(QString fileName);

    /*!
     * \brief This function is called by the private slot GreyscaleImg() from view.
     * It transforms ONE selected colored QImage parameter into a greyscale QPixmap, which
     * will be loaded in the show_Image() of the view.
     * \param bwImage QImage
     */
    void GreyscaleImgControl(QImage bwImage);

    /*!
     * \brief This function saves the selected image. It is called by the private slot
     * SaveImage() from view.
     * \param NameFile QString
     * \param ImagetoSave Qimage
     */
    void Save_Image(QString NameFile, QImage ImagetoSave);

    /*!
     * \brief This function
     * \param ListItems
     */
    void allGrayscale(QList <QGraphicsItem *> ListItems);
    void convertForPeleMele(QImage Image);

//////////////////VIDEO//////////////////////////////////

    QProcess *videoProcess;
    void startConversion();
    void readFileVideo(QString fileName);
    void delay( int millisecondsToWait);
};

#endif // CONTROL_H
