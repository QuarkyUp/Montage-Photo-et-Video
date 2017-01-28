#ifndef MODEL_H
#define MODEL_H

/**
 * \file model.h
 * Model of the MVC
 *
 */

#include "libraries.h"

/*!
 * \brief The Model class The Model class of our MVC.
 * Its role is to deal with our data.
 */
class Model
{
private:
   QPixmap PixmapImage;

public:
    Model();
    ~Model();

//////////////////IMAGE//////////////////////////////////

    /*!
     * \brief This function loads our image into a QPixmap
     * \param QString
     * \return QPixmap
     */
    QPixmap loadPixmapImage(QString fileName);

    /*!
     * \brief This function save an image
     * \param QString
     * \param QImage
     */
    void SaveModImage(QString NameFile, QImage Image);

//////////////////VIDEO//////////////////////////////////

    //Liste de String qui va contenir tout mes fileName, au fur et à mesure que j'en sélectionne après avoir cliqué sur "Browse..."
    QStringList videoFileList;
};

#endif // MODEL_H


