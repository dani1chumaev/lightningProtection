#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "imageviewer.h"
#include "utils.h"
#include <QFile>
#include <QTextStream>
#include <iostream>
#include <fstream>
#include "cmath"
#include "enums.h"
#include "buildingtypemodel.h"
#include "puamodel.h"
#include "lightningprotectioncategorymodel.h"
#include "refractorinessmodel.h"
#include "zonetypemodel.h"
#include "locationmodel.h"

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

    ui->lPCategoryAndTypeParamTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->lPCategoryAndTypeResultTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);


    ui->ligtningFrequencyImage->setScaledContents(true);


    ui->lPCategoryAndTypeParamTable->verticalHeader()->setStretchLastSection(true);

//    ui->lPCategoryAndTypeParamTable->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);


    //ui->lPCategoryAndTypeParamTable->head

//    ui->lPCategoryAndTypeParamTable.setSi
//    ui->lPCategoryAndTypeParamTable->setWordWrap(true);
//    ui->lPCategoryAndTypeParamTable->setTextElideMode(Qt::ElideMiddle);
//    ui->lPCategoryAndTypeParamTable->resizeRowsToContents();

//    QTableWidgetItem *item = new QTableWidgetItem();
//    item->setText(QVariant::fromValue(Enums::Test::t).toString());

//    ui->lPCategoryAndTypeResultTable->setItem(0, 0, item);

//    ui->verticalLayout_3.set
//    QTableWidgetItem *item = ui->LightningIntensityTable->item(row, column);
//    item->setFlags(item->flags() ^ Qt::ItemIsEditable);

//    ui->lightningStrikesAverageLabel->setStyleSheet("margin-left: 10px; border-radius: 25px; background: white; color: #4A0C46;");

}

int n, lightningIntensity;
double N;

//Enums::BuildingType buildingType;
RefractorinessModel::Refractoriness refractoriness;
PUAModel::PUA pua;
ZoneTypeModel::ZoneType zoneType;
LightningProtectionCategoryModel::LightningProtectionCategory lightningProtectionCategory;
BuildingTypeModel::Building buildingType;
PUAModel::Building building;
LocationModel::Location location;


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

void MainWindow::on_comboBox_3_currentIndexChanged(const QString &arg1)
{
    if (arg1 == "П-I") {
        ui->PUABrowser->setHtml(Utils::readFile(":/html/html/P-1.html"));
        pua = PUAModel::P1;
    }
    if (arg1 == "П-II") {
        ui->PUABrowser->setHtml(Utils::readFile(":/html/html/P-2.html"));
        pua = PUAModel::P2;
    }
    if (arg1 == "П-IIа") {
        ui->PUABrowser->setHtml(Utils::readFile(":/html/html/P-2a.html"));
        pua = PUAModel::P2a;
    }
    if (arg1 == "П-III") {
        ui->PUABrowser->setHtml(Utils::readFile(":/html/html/P-3.html"));
        pua = PUAModel::P3;
    }
    if (arg1 == "В-I") {
        ui->PUABrowser->setHtml(Utils::readFile(":/html/html/B-1.html"));
        pua = PUAModel::B1;
    }
    if (arg1 == "В-Iа") {
        ui->PUABrowser->setHtml(Utils::readFile(":/html/html/B-1a.html"));
        pua = PUAModel::B1a;
    }
    if (arg1 == "В-Iб") {
        ui->PUABrowser->setHtml(Utils::readFile(":/html/html/B-1b.html"));
        pua = PUAModel::B1b;
    }
    if (arg1 == "В-Iг") {
        ui->PUABrowser->setHtml(Utils::readFile(":/html/html/B-1g.html"));
        pua = PUAModel::B1g;
    }
    if (arg1 == "В-II") {
        ui->PUABrowser->setHtml(Utils::readFile(":/html/html/B-2.html"));
        pua = PUAModel::B2;
    }
    if (arg1 == "В-IIа") {
        ui->PUABrowser->setHtml(Utils::readFile(":/html/html/B-2a.html"));
        pua = PUAModel::B2a;
    }
}

void MainWindow::on_refractorinessComboBox_currentIndexChanged(const QString &arg1)
{
    if (arg1 == "I") {
        ui->refractorinessBrowser->setHtml(Utils::readFile(":/html/html/refractoriness-1.html"));
        refractoriness = RefractorinessModel::I;
    }
    if (arg1 == "II") {
        ui->refractorinessBrowser->setHtml(Utils::readFile(":/html/html/refractoriness-2.html"));
        refractoriness = RefractorinessModel::II;
    }
    if (arg1 == "III") {
        ui->refractorinessBrowser->setHtml(Utils::readFile(":/html/html/refractoriness-3.html"));
        refractoriness = RefractorinessModel::III;
    }
    if (arg1 == "IV") {
        ui->refractorinessBrowser->setHtml(Utils::readFile(":/html/html/refractoriness-4.html"));
        refractoriness = RefractorinessModel::IV;
    }
    if (arg1 == "V") {
        ui->refractorinessBrowser->setHtml(Utils::readFile(":/html/html/refractoriness-5.html"));
        refractoriness = RefractorinessModel::V;
    }

}

void MainWindow::on_buildingTypeComboBox_currentIndexChanged(int index)
{
    if (index == 0) {
        building = PUAModel::Building::Common;
        buildingType = BuildingTypeModel::Common;
        ui->objectLengthDoubleSpinBox->setEnabled(true);
        ui->objectWidthDoubleSpinBox->setEnabled(true);
    }
    if (index == 1) {
        building = PUAModel::Building::Open;
        buildingType = BuildingTypeModel::Open;
        ui->objectLengthDoubleSpinBox->setEnabled(true);
        ui->objectWidthDoubleSpinBox->setEnabled(true);
    }
    if (index == 2) {
        building = PUAModel::Building::TallTower;
        buildingType = BuildingTypeModel::TallTower;
        ui->objectLengthDoubleSpinBox->setEnabled(false);
        ui->objectWidthDoubleSpinBox->setEnabled(false);
    }
    if (index == 3) {
        building = PUAModel::Building::Towering;
        buildingType = BuildingTypeModel::Towering;
        ui->objectLengthDoubleSpinBox->setEnabled(true);
        ui->objectWidthDoubleSpinBox->setEnabled(true);
    }
    if (index == 4) {
        building = PUAModel::Building::Public;
        buildingType = BuildingTypeModel::Public;
        ui->objectLengthDoubleSpinBox->setEnabled(true);
        ui->objectWidthDoubleSpinBox->setEnabled(true);
    }




}



void MainWindow::on_lightningStrikesAverageCalcBtn_clicked()
{
    lightningIntensity = ui->lightningIntensitySpinBox->value();
    QLabel *lightningStrikesAverageResult = ui->lightningStrikesAverageResult;


    /*if (lightningIntensity > 0 && lightningIntensity < 10) {
        lightningStrikesAverageResult->setText("0,5");
        n = 0.5;
    } else*/ if (lightningIntensity >= 10 && lightningIntensity < 20) {
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
        lightningIntensity = NULL;
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

    if (buildingType == BuildingTypeModel::TallTower) {
        N = 9 * M_PI * pow(h, 2) * n * pow(10, -6);
    } else {
        N = (S + 6 * h) * (L + 6 * h) * n * pow(10, -6);
    }

    expectedStrikesNumberResult->setText(QString::number(N));

    expectedStrikesNumberResult->setStyleSheet("QLabel {border: 1px solid black;border-radius: 15px;background-color: green;padding: 0px 0px 0px 0px;}");

}

void MainWindow::on_protectionZoneAndProtectionCategoryCalcBtn_clicked()
{

    if (lightningIntensity == NULL) {
        return;
    }

    calcZoneType();

    QTableWidgetItem *buildingI = new QTableWidgetItem();
    QTableWidgetItem *puaI = new QTableWidgetItem();
    QTableWidgetItem *refractorinessI = new QTableWidgetItem();
    QTableWidgetItem *lightningIntensityI = new QTableWidgetItem();
    QTableWidgetItem *locationI = new QTableWidgetItem();

    buildingI->setText(BuildingTypeModel::getString(buildingType));
    puaI->setText(PUAModel::getString(pua));
    refractorinessI->setText(RefractorinessModel::getString(refractoriness));
    lightningIntensityI->setText(QString::number(N));
    locationI->setText(LocationModel::getString(location));

    buildingI->setTextAlignment(Qt::AlignCenter);
    puaI->setTextAlignment(Qt::AlignCenter);
    refractorinessI->setTextAlignment(Qt::AlignCenter);
    lightningIntensityI->setTextAlignment(Qt::AlignCenter);
    locationI->setTextAlignment(Qt::AlignCenter);

    ui->lPCategoryAndTypeParamTable->setItem(0, 0, buildingI);
    ui->lPCategoryAndTypeParamTable->setItem(0, 1, puaI);
    ui->lPCategoryAndTypeParamTable->setItem(0, 2, refractorinessI);
    ui->lPCategoryAndTypeParamTable->setItem(0, 3, lightningIntensityI);
    ui->lPCategoryAndTypeParamTable->setItem(0, 4, locationI);

    QTableWidgetItem *zoneTypeI = new QTableWidgetItem();
    QTableWidgetItem *lightningProtectionCategoryI = new QTableWidgetItem();

    zoneTypeI->setTextAlignment(Qt::AlignCenter);
    lightningProtectionCategoryI->setTextAlignment(Qt::AlignCenter);

    zoneTypeI->setText(ZoneTypeModel::getString(zoneType));
    lightningProtectionCategoryI->setText(LightningProtectionCategoryModel::getString(lightningProtectionCategory));

    ui->lPCategoryAndTypeResultTable->setItem(0, 0, zoneTypeI);
    ui->lPCategoryAndTypeResultTable->setItem(0, 1, lightningProtectionCategoryI);

}

void MainWindow::calcZoneType() {
    if (pua == PUAModel::B1g) {
        zoneType = ZoneTypeModel::B;
        lightningProtectionCategory = LightningProtectionCategoryModel::II;
        location = LocationModel::Whole;
    }

    if (lightningIntensity >= 20 && (refractoriness == RefractorinessModel::III
                                     || refractoriness == RefractorinessModel::IV
                                     || refractoriness == RefractorinessModel::V)) {
        zoneType = ZoneTypeModel::B;
        lightningProtectionCategory = LightningProtectionCategoryModel::III;
        location = LocationModel::LightningAverage20;
    }

    if ((pua == PUAModel::P3) && lightningIntensity >= 20) {
        zoneType = ZoneTypeModel::B;
        lightningProtectionCategory = LightningProtectionCategoryModel::III;
        location = LocationModel::LightningAverage20;
    }

    if (buildingType == BuildingTypeModel::TallTower && lightningIntensity >= 10) {
        zoneType = ZoneTypeModel::B;
        lightningProtectionCategory = LightningProtectionCategoryModel::III;
        location = LocationModel::LightningAverage10;
    }

    if (buildingType == BuildingTypeModel::Towering && lightningIntensity >= 20) {
        zoneType = ZoneTypeModel::B;
        lightningProtectionCategory = LightningProtectionCategoryModel::III;
        location = LocationModel::LightningAverage20;
    }

    if (buildingType == BuildingTypeModel::Public
        &&  (refractoriness == RefractorinessModel::III
            || refractoriness == RefractorinessModel::IV
            || refractoriness == RefractorinessModel::V)) {
        zoneType = ZoneTypeModel::B;
        lightningProtectionCategory = LightningProtectionCategoryModel::III;
        location = LocationModel::Whole;
    }

    if ((pua == PUAModel::P1 || pua == PUAModel::P2 || pua == PUAModel::P2a)
        && lightningIntensity >= 20) {
        if (N > 2) {
            zoneType = ZoneTypeModel::A;
        } else {
            zoneType = ZoneTypeModel::B;
        }
        lightningProtectionCategory = LightningProtectionCategoryModel::III;
        location = LocationModel::LightningAverage20;
    }

    if ((pua == PUAModel::B1a || pua == PUAModel::B1b || pua == PUAModel::B2a)
        && lightningIntensity >= 10) {
        if (N > 1) {
            zoneType = ZoneTypeModel::A;

        } else {
            zoneType = ZoneTypeModel::B;
        }
        lightningProtectionCategory = LightningProtectionCategoryModel::II;
        location = LocationModel::LightningAverage10;
    }

    if (pua == PUAModel::B1 || pua == PUAModel::B2) {
        zoneType = ZoneTypeModel::A;
        lightningProtectionCategory = LightningProtectionCategoryModel::I;
        location = LocationModel::Whole;
    }
}


