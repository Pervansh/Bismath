#include "mainwindow.h"

#include <QApplication>

#include <iostream>

#include "Vector2d.h"
#include "Math.h"
#include "IFunctional.h"
#include "Point.h"

using namespace Bismath;
using namespace blip;
using namespace std;

void r(const Point* p) {
    cout << "It's ok\n";
}

int main(int argc, char *argv[]) {
    /*
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
    */

    IFunctional<void, const Point*>* f = toFunctional(&r);
    Point* p = new Point(f);
    p->draw();

    return 0;
}
