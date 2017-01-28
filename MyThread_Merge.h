#ifndef MYTHREAD_MERGE_H
#define MYTHREAD_MERGE_H

/**
 * \file MyThread_Merge.h
 * \Thread class
 * \author Thomas Le Flohic
 * \version 0.1
 * \date 18 novembre 2016
 *
 * Thread video merging
 *
 */

#include "libraries.h"
#include "control.h"

/*!
 * \brief Ce deuxième type de thread va permettre d'assembler les fichiers vidéos les uns à la suite des autre dans l'ordre dans lesquels on les avait sélectionné
 */
class MyThread_Merge : public QThread
{
public:
    explicit MyThread_Merge(QStringList s);
    void run();
    QProcess *videoProcess;

private:
    QStringList fileList;
};

#endif // MYTHREAD_MERGE_H
