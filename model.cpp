#include "model.h"

Model::Model()
{
}

Model::~Model()
{
}

////////////////////////IMAGE///////////////////////////////////////////
///////////////////////////////////////////////////////////////////////

QPixmap Model::loadPixmapImage(QString fileName)
{
    PixmapImage.load(fileName);

    return PixmapImage;
}


void Model::SaveModImage(QString NameFile, QImage Image)
{
    Image.save(NameFile);
}

