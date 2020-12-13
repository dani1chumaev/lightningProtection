#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "imageviewer.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    ui->LightningIntensityTable->setEnabled(false);
    ui->LightningIntensityTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

//    ui->scrollArea->setWidgetResizable(true);
//    QPixmap *ligtningFrequencyMap = new QPixmap(":/image/image/lightningFrequency.jpg");
//    ui->ligtningFrequencyImage->setPixmap(ligtningFrequencyMap->scaled(
//            ui->scrollAreaWidgetContents->width(),
//            ui->scrollAreaWidgetContents->height(),
//            Qt::KeepAspectRatio));
//    ui->ligtningFrequencyImage->setScaledContents(true);

//    ui->verticalLayout_3.set
//    QTableWidgetItem *item = ui->LightningIntensityTable->item(row, column);
//    item->setFlags(item->flags() ^ Qt::ItemIsEditable);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_nextPageBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->currentIndex()+1);
}

void MainWindow::on_previousPageBtn_clicked()
{
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->currentIndex()-1);
}

void MainWindow::on_LightningIntensityMap_clicked()
{
    imageViewer *iv = new imageViewer(this);
    iv->show();
}
