#ifndef MYGLWIDGET_H
#define MYGLWIDGET_H

#include <QGLWidget>

class MyGLWidget : public QGLWidget
{

 Q_OBJECT

public:
   explicit MyGLWidget(QWidget *parent = 0);
    ~MyGLWidget();

private:

    void draw();

signals:

public slots:

protected:

    void initializeGL();
    void paintGL();
    void resizeGL(int w, int h);

    QSize minimumSizeHint() const;
    QSize sizeHint();


};

#endif // MYGLWIDGET_H
