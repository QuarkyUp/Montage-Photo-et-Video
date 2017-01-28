#ifndef View_H
#define View_HS

/**
 * \file view.h
 * View of MVC
 *
 */

#include "libraries.h"
#include "thread_img.h"

class Control;

namespace Ui {
class View;
}

/*!
 * \brief The View class The View class of our MVC, linked to our Control Class.
 * It manages our interface.
 */

class View : public QMainWindow
{
    Q_OBJECT

public:
    /*!
     * \brief Explicit constructor
     * \param parent
     */
    explicit View(QWidget *parent = 0);

    ~View();

    /*!
     * \brief This function links our class View and Control
     * \param control Control
     */
    void setControl(Control *control){
        this->control=control;
    }

///////PUBLIC//////IMAGE//////////////////////////////////

    /*!
     * \brief This function transforms a QPixmap in to an item which we'll be added
     * to our QList <QGraphicsItems *>. The item is setup in position and ZValue.
     * The scene displays all our items.
     * \param Image - QPixmap variable
     */
    void show_Image(QPixmap Image);

    /*!
     * \brief This function is an accessor. It is used to access to the QList of items.
     * The thread_img use it, it is also call in control.
     * \return QList <QGraphicsItem *> (template).
     */
    QList <QGraphicsItem *> getListItem(){return ListItems;}

    /*!
     * \brief The getScene is an accessor which returns the view scene
     * \return QGraphicsScene
     */
    QGraphicsScene *getScene(){return scene;}

    /*!
     * \brief The getPosition() is an accessor which returns the position of the last
     * selectionned item.
     * \return  QPointF
     */
    QPointF getPosition(){return Position;}

    /*!
     * \brief This function is called by the thread_img run(). Avoids a new (0,0) default position on the item.
     * position
     * \param i int: depending on the thread's number, the #i from ListItem is called.
     * \return QPointF
     */
    QPointF ajust_Position(int i);

    /*!
     * \brief This function is used to delete the colored images that are being transformed
     * in greyscale.
     */
    void cleanListforThread();

    /*!
     * \brief This function is used to display a message in the status bar. It is called from
     * the controller.
     */
    void threadStatusBar();

////////PUBLIC/////VIDEO//////////////////////////////////

    /*!
     * \brief //Cette fonction est appelée depuis la fonction readFileVideo qui se trouve dans le fichier control.cpp
     *Elle met permet de modifier le texte de la boite dont la variable est videoInputLineEdit par son paramètre fileName
     * \param QString
     */
    void setVideoInputLineEdit(QString text);

    /*!
     * \brief Idem qu'au dessus, à la différence que "append" signifie ajouter.
     *On va ajouter chaque fileName dans cette boite, ligne par ligne
     * \param QString
     */
    void appendVideoFileListTextEdit(QString text);

    /*!
     * \brief Affiche une fenetre avec un message d'erreur
     */
    void createQMessageBox();

    /*!
     * \brief This function can be activate when the user leaves the program.
     * It saves all the images.
     */
    void saveAll();

    /*!
     * \brief Override of QMainWindow::closeEvent() which allows an event on the exit
     * action
     * \param QCloseEvent *event
     */
    void closeEvent(QCloseEvent *event);

private:

///////PRIVATE////////IMAGE////////////////////////////////

    Ui::View *ui;
    Control *control;
    QGraphicsScene *scene;
    QString fileName;
    QGraphicsItem* Item;
    QGraphicsPixmapItem* PixMapItem;
    QList <QGraphicsItem *> ListItems; //template QList we use in priority
    QPointF Position;
    int IncZ; //handle hiding items

private slots:

/////////PRIVATE SLOTS//////IMAGE//////////////////////////

    void readFile();
    bool Selection();
    void GreyscaleImg();
    void TopPosition();
    void Background();
    void EraseImage();
    void SaveImage();
    void peleMele();
    void newProject();
    void allGrayscale();
    void ExitProgram();

/////////PRIVATE SLOTS////VIDEO//////////////////////////

    /*!
     * \brief //Quand on clique sur le bouton "Browse ..." qui correspond à la variable videoFileOpenButton
     *Une fenetre s'ouvre de type QFileDialog qui va permettre de sélectionner un fichier
     *Le chemin d'accès au fichier sera contenu dans la variable fileName de type QString.
     *En MVC, on fait appel a une fonction en dehors du fichier vue.cpp pour afficher le contenu de la variable fileName sur l'interface
     *On fait appel à la fonction readFileVideo qui fait partie du control.cpp afin de réalisé l'action souhaitée, c'est à dire afficher le contenu de la variable fileName sur l'interface
     *On met donc en paramètre de la fonction : fileName
     */
    void on_videoFileOpenButton_clicked();

    /*!
     * \brief //Quand on clique sur le bouton "Start" qui correspond à la variable videoStartButton
     *On appelle la fonction startConversion contenu dans le fichier control.cpp
     */
    void on_videoStartButton_clicked();
};

#endif // View_H
