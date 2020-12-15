#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "imageviewer.h"
#include "utils.h"
#include <QFile>
#include <QTextStream>
#include <iostream>
#include <fstream>
#include "cmath"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    ui->LightningIntensityTable->setEnabled(false);
    ui->LightningIntensityTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);


//    ui->scrollArea->setWidgetResizable(true);

    QPixmap *ligtningFrequencyMap = new QPixmap(":/image/image/lightningFrequency.jpg");
//    ui->ligtningFrequencyImage->setPixmap(*ligtningFrequencyMap);
    ui->ligtningFrequencyImage->setPixmap(ligtningFrequencyMap->scaled(1089, 601, Qt::KeepAspectRatio));
//    ui->ligtningFrequencyImage->setPixmap(ligtningFrequencyMap->scaled(
//        ui->centralwidget->width(),
//            ui->centralwidget->height(),
//            Qt::KeepAspectRatio));

    ui->buildingAndLocationTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);


    ui->ligtningFrequencyImage->setScaledContents(true);



//    ui->verticalLayout_3.set
//    QTableWidgetItem *item = ui->LightningIntensityTable->item(row, column);
//    item->setFlags(item->flags() ^ Qt::ItemIsEditable);

//    ui->lightningStrikesAverageLabel->setStyleSheet("margin-left: 10px; border-radius: 25px; background: white; color: #4A0C46;");

}

int n;

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

void MainWindow::on_toolBox_currentChanged(int index)
{
//    int i = ui->page_8->width();
//    int j =  ui->page_8->height();
//    int k = ui->centralwidget->width();
//    int l =  ui->centralwidget->height();
//    QPixmap *ligtningFrequencyMap = new QPixmap(":/image/image/lightningFrequency.jpg");
//    ui->ligtningFrequencyImage->setPixmap(ligtningFrequencyMap->scaled(
//        ui->page_8->width(),
//        ui->page_8->height(),
//        Qt::KeepAspectRatioByExpanding));
}

enum PUA{
    P1,
    P2,
    P2a,
    P3,
    B1,
    B1a,
    B1b,
    B1g,
    B2,
    B2a
};

void MainWindow::on_comboBox_3_currentIndexChanged(const QString &arg1)
{
    if (arg1 == "П-I") {
        ui->PUABrowser->setHtml(Utils::readFile(":/html/html/P-1.html"));
    }
    if (arg1 == "П-II") {
        ui->PUABrowser->setHtml(Utils::readFile(":/html/html/P-2.html"));
    }
    if (arg1 == "П-IIа") {
        ui->PUABrowser->setHtml(Utils::readFile(":/html/html/P-2a.html"));
    }
    if (arg1 == "П-III") {
        ui->PUABrowser->setHtml(Utils::readFile(":/html/html/P-3.html"));
    }
    if (arg1 == "В-I") {
        ui->PUABrowser->setHtml(Utils::readFile(":/html/html/B-1.html"));
    }
    if (arg1 == "В-Iа") {
        ui->PUABrowser->setHtml(Utils::readFile(":/html/html/B-1a.html"));
    }
    if (arg1 == "В-Iб") {
        ui->PUABrowser->setHtml(Utils::readFile(":/html/html/B-1b.html"));
    }
    if (arg1 == "В-Iг") {
        ui->PUABrowser->setHtml(Utils::readFile(":/html/html/B-1g.html"));
    }
    if (arg1 == "В-II") {
        ui->PUABrowser->setHtml(Utils::readFile(":/html/html/B-2.html"));
    }
    if (arg1 == "В-IIа") {
        ui->PUABrowser->setHtml(Utils::readFile(":/html/html/B-2a.html"));
    }
}



void MainWindow::on_lightningStrikesAverageCalcBtn_clicked()
{
    int lightningIntensity = ui->lightningIntensitySpinBox->value();
    QLabel *lightningStrikesAverageResult = ui->lightningStrikesAverageResult;


    if (lightningIntensity >= 10 && lightningIntensity < 20) {
        lightningStrikesAverageResult->setText("1");
        n = 1;
        lightningStrikesAverageResult->setStyleSheet("QLabel {border: 1px solid black;border-radius: 15px;background-color: green;padding: 0px 0px 0px 0px;}");
    } else if (lightningIntensity >= 20 && lightningIntensity < 40) {
        lightningStrikesAverageResult->setText("3");
        n = 3;
        lightningStrikesAverageResult->setStyleSheet("QLabel {border: 1px solid black;border-radius: 15px;background-color: green;padding: 0px 0px 0px 0px;}");
    } else if (lightningIntensity >= 40 && lightningIntensity < 60) {
        lightningStrikesAverageResult->setText("6");
        n = 6;
        lightningStrikesAverageResult->setStyleSheet("QLabel {border: 1px solid black;border-radius: 15px;background-color: green;padding: 0px 0px 0px 0px;}");
    } else if (lightningIntensity >= 60 && lightningIntensity < 80) {
        lightningStrikesAverageResult->setText("9");
        n = 9;
        lightningStrikesAverageResult->setStyleSheet("QLabel {border: 1px solid black;border-radius: 15px;background-color: green;padding: 0px 0px 0px 0px;}");
    } else if (lightningIntensity >= 80) {
        lightningStrikesAverageResult->setText("12");
        n = 12;
        lightningStrikesAverageResult->setStyleSheet("QLabel {border: 1px solid black;border-radius: 15px;background-color: green;padding: 0px 0px 0px 0px;}");
    } else {
        lightningStrikesAverageResult->setText("Ошибка");
        n = NULL;
        lightningStrikesAverageResult->setStyleSheet("QLabel {border: 1px solid black;border-radius: 15px;background-color: red;padding: 0px 0px 0px 0px;}");
    }
}

void MainWindow::on_expectedStrikesNumberCaclBtn_clicked()
{
    QLabel *expectedStrikesNumberResult = ui->expectedStrikesNumberResult;

    if (n == NULL) {
        expectedStrikesNumberResult->setText("Ошибка");
        expectedStrikesNumberResult->setStyleSheet("QLabel {border: 1px solid black;border-radius: 15px;background-color: red;padding: 0px 0px 0px 0px;}");
        return;
    }

    double L = ui->objectLengthDoubleSpinBox->value();
    double h = ui->objectHeightDoubleSpinBox->value();
    double S = ui->objectWidthDoubleSpinBox->value();

    //N = (S + 6h)(L + 6h)n ∙ 10^–6

    double N = (S + 6 * h) * (L + 6 * h) * n * pow(10, -6);

    expectedStrikesNumberResult->setText(QString::number(N));

    expectedStrikesNumberResult->setStyleSheet("QLabel {border: 1px solid black;border-radius: 15px;background-color: green;padding: 0px 0px 0px 0px;}");

}

void MainWindow::on_protectionZoneAndProtectionCategoryCalcBtn_clicked()
{
    PUA *pua = new PUA(B1);

//    if (pua == PUA::)

}
