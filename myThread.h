/**
 * \file myThread.h
 * \Thread class
 * \author Thomas Le Flohic
 * \version 0.1
 * \date 18 novembre 2016
 *
 * Programme de test pour l'objet de gestion des chaînes de caractères Str_t.
 *
 */

#ifndef MYTHREAD_H
#define MYTHREAD_H

#include <QThread>
#include <QString>
#include <QProcess>

/*!
 * \brief On créé une classe MyThread qui hérite obligatoirement de QThread.
 * Ce premier type de thread va permettre de normaliser les fichiers vidéos au même format pour faciliter l'assemblage qui viendra plus tard
 */
class MyThread : public QThread
{
public:

    /*!
     * \brief On créé le constructeur de la classe
     * Il prend en paramètre le chemin d'accès de la vidéo qu'il devra traiter
     * \param QString
     */
    explicit MyThread(QString fileName);

    /*!
     * \brief La méthode run est prévu par la classe QThread, de laquelle on hérite, pour dire au thread ce qu'on veut qu'il fasse
     * C'est à dire qu'on redéfinit l'utilisation de la méthode run pour qu'elle fasse ce que l'on veut
     * On appelle cela une surcharge/override
     */
    void run();

    /*!
     * \brief QProcess permettra d'éxécuter le script bash se chargeant de convertir la vidéo
     */
    QProcess *videoProcess;

private:
    //String contenant le fileName en paramètre du constructeur
    QString fileName;
};

#endif // MYTHREAD_H
