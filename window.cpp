#include "window.h"
#include <QtWidgets>
#include "ui_window.h"
#include "myglwidget.h"

Window::Window(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Window)
{
    ui->setupUi(this);

}

Window::~Window()
{
    delete ui;
}


void Window::keyPressEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Escape)
        close();
    else
        QWidget::keyPressEvent(event);
}
