/*! \mainpage Project by LE FLOHIC Thomas, SCHWARTZ Léa, MARTIN Christopher
 * \date 12/12/16
*/

#include "libraries.h"
#include "view.h"
#include "control.h"
#include "model.h"
#include <QWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    View w;
    Model m;
    Control(&m, &w);

    w.showMaximized();

    return a.exec();
}
