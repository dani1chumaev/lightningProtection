#include "imageviewer.h"
#include "ui_imageviewer.h"

imageViewer::imageViewer(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::imageViewer)
{
    ui->setupUi(this);
//    ui->image->setPixmap(pixmap->copy());
    //ui->image->setScaledContents(true);
}

imageViewer::~imageViewer()
{
    delete ui;
}
