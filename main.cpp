#include "window.h"
#include <QApplication>
#include <QDesktopWidget>
#include <QtOpenGL>
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Window w;


    if(!QGLFormat::hasOpenGL())
    {
        std::cerr << "This system has no OpenGL support" << std::endl;
        return -1;
    }


    w.resize(w.sizeHint());
    int desktopArea = QApplication::desktop()->width() * QApplication::desktop()->height();
    int widgetArea = w.width() * w.height();
    w.setWindowTitle("OpenGL with Qt");

    if(((float)widgetArea / (float) desktopArea) < 0.75f)
        w.show();
    else
        w.showMaximized();


    w.show();

    return a.exec();
}
