#ifndef THREAD_IMG
#define THREAD_IMG

/**
 * \file thread_img.h
 * Thread greyscale for images
 *
 */

#include "libraries.h"

class Control;
class View;

/*!
 * \brief The thread_img class is our thread for images, inherited from QThread.
 * Its role is to transform all colored images in to greyscale images.
 * There is one thread per image.
 */
class thread_img : public QThread
{
public:
    thread_img(QObject *parent, Control *control, View *view, int id);
    void run(); //function to be called

private:
    Control *control;
    View *view;
    int id_thread;
};


#endif // THREAD_IMG
