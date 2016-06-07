#include "myglwidget.h"
#include <QtWidgets>
#include <QtOpenGL>

MyGLWidget::MyGLWidget(QWidget *parent) : QGLWidget(QGLFormat(QGL::SampleBuffers), parent)
{

}

MyGLWidget::~MyGLWidget()
{

}

void MyGLWidget::draw()
{


}


void MyGLWidget::initializeGL()
{

    glClearDepth(1.0f);


  //  static GLfloat lightPosition[4] = {0 ,0 ,10 , 1.0};

  // glLightfv(GL_LIGHT0, GL_POSITION, lightPosition);

}

void MyGLWidget::paintGL()
{
    // Clear the window to black
   glClearColor(0.0,0.0,0.0,0.0);
   glClear(GL_COLOR_BUFFER_BIT);

   // Set the color of the rectangle to be created
   glColor3f(1.0,1.0,1.0);

   // glEnable(GL_DEPTH_TEST);
  // glEnable(GL_CULL_FACE);
  // glShadeModel(GL_SMOOTH);
  // glEnable(GL_LIGHTING);
  // glEnable(GL_LIGHT0);

   glBegin(GL_POLYGON);
   glVertex2f(0.25, 0.25);
   glVertex2f(0.75,0.25);
   glVertex2f(0.75,0.75);
   glVertex2f(0.25,0.75);
   glEnd();


   // glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
   // glLoadIdentity();
   // glTranslatef(0.0,0.0,-10.0);


    draw();
}

void MyGLWidget::resizeGL(int w, int h)
{
    int side = qMin(w,h);
    glViewport((w - side) / 2, (h - side) / 2, side, side);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

//#ifdef QT_OPENGL_ES_1
//    glOrthof(-2, +2, -2, +2, 1.0, 15.0);
//#else
    glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
//#endif

    glMatrixMode(GL_MODELVIEW);

    glLoadIdentity();

}

QSize MyGLWidget::minimumSizeHint() const
{
    return QSize(50,50);
}


QSize MyGLWidget::sizeHint()
{
    return QSize(1200,1200);
}




