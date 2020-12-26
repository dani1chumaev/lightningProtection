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
#include "singlelightningrod.h"
#include "doublelightningrod.h"
#include "doublecabelrod.h"
#include "singlecabelrod.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

//    ui->LightningIntensityTable->setEnabled(false);
//    ui->LightningIntensityTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);


//    ui->scrollArea->setWidgetResizable(true);


//    ui->ligtningFrequencyImage->setPixmap(*ligtningFrequencyMap);
//    ui->ligtningFrequencyImage->setPixmap(ligtningFrequencyMap->scaled(1089, 601, Qt::KeepAspectRatio));

//    ui->ligtningFrequencyImage->setScaledContents(true);



    ui->lPCategoryAndTypeParamTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->lPCategoryAndTypeResultTable->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    ui->lPCategoryAndTypeParamTable->verticalHeader()->setStretchLastSection(true);

    ui->label_22->setStyleSheet("QLabel {border: 1px solid black;border-radius: 15px;background-color: orange;padding: 0px 0px 0px 0px;}");


    //Initial param
    ui->PUABrowser->setHtml(Utils::readFile(":/html/html/P-1.html"));
    ui->refractorinessBrowser->setHtml(Utils::readFile(":/html/html/refractoriness-1.html"));

    ui->lightningRodTypeStackedWidget->setCurrentIndex(0);
    ui->label_22->setStyleSheet("QLabel {border: 1px solid black;border-radius: 15px;background-color: orange;padding: 0px 0px 0px 0px;}");


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

    calcZoneType();
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

    calcZoneType();

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

    calcExpectedStrikesNumber();
}

void MainWindow::changeGuiWhileCalcZoneType() {



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

    if (lightningIntensity == 0 || N == 0 ) {
        zoneType = ZoneTypeModel::NONE;
        whichLightningRodSelected();
        return;
    }

    zoneType = ZoneTypeModel::B;

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

    changeGuiWhileCalcZoneType();
    whichLightningRodSelected();
}

void MainWindow::on_singleRadioBtn_clicked()
{
    whichLightningRodSelected();
}

void MainWindow::on_doubleRadioBtn_clicked()
{
    whichLightningRodSelected();
}

void MainWindow::on_rodRadioBtn_clicked()
{
    whichLightningRodSelected();
}

void MainWindow::on_cableRadioBtn_clicked()
{
    whichLightningRodSelected();
}

void MainWindow::whichLightningRodSelected() {

    if (zoneType == ZoneTypeModel::NONE) {
        ui->lightningRodTypeStackedWidget->setCurrentIndex(0);
        ui->label_22->setStyleSheet("QLabel {border: 1px solid black;border-radius: 15px;background-color: orange;padding: 0px 0px 0px 0px;}");
        return;
    }

    //Выбор типа молниеотвода
    if (ui->singleRadioBtn->isChecked()) {
        if (ui->rodRadioBtn->isChecked()) {
            ui->lightningRodTypeStackedWidget->setCurrentIndex(1);

            if (zoneType == ZoneTypeModel::A) {
                ui->zoneStackedWidget->setCurrentIndex(0);
            } else {
                ui->zoneStackedWidget->setCurrentIndex(1);
            }

            calcSLR();
        }
        if (ui->cableRadioBtn->isChecked()) {
            ui->lightningRodTypeStackedWidget->setCurrentIndex(2);

            if (zoneType == ZoneTypeModel::A) {
                ui->zoneStackedWidgetSLC->setCurrentIndex(0);
            } else {
                ui->zoneStackedWidgetSLC->setCurrentIndex(1);
            }

            calcSLC();
        }
    }
    if (ui->doubleRadioBtn->isChecked()) {
        if (ui->rodRadioBtn->isChecked()) {
            ui->lightningRodTypeStackedWidget->setCurrentIndex(3);

            if (zoneType == ZoneTypeModel::A) {
                ui->zoneStackedWidgetDLR->setCurrentIndex(0);
            } else {
                ui->zoneStackedWidgetDLR->setCurrentIndex(1);
            }

            calcDLR();

        }
        if (ui->cableRadioBtn->isChecked()) {
            ui->lightningRodTypeStackedWidget->setCurrentIndex(4);

            if (zoneType == ZoneTypeModel::A) {
                ui->zoneStackedWidgetDLC->setCurrentIndex(0);
            } else {
                ui->zoneStackedWidgetDLC->setCurrentIndex(1);
            }

            calcDLC();
        }
    }


}


void MainWindow::calcSLR() {

    double L = ui->objectLengthDoubleSpinBox->value();
    double l = ui->distanceFromWallToLightningDoubleSpinBoxSLR->value();
    double hx = ui->objectHeightDoubleSpinBox->value();
    double S = ui->objectWidthDoubleSpinBox->value();
    double Rx = sqrt(pow(L / 2, 2) + pow(S + l, 2));
    singleLightningRod slr;

    double h, h0, R0;

    if (zoneType == ZoneTypeModel::A) {
        h = slr.fullHeightA(hx, Rx);
        h0 = slr.protectionZoneHeightA(h);
        R0 = slr.protectionZoneBoundaryA(h);

        ui->slrhLabelA->setText(QString::number(h) + " м");
        ui->slrh0LabelA->setText(QString::number(h0)+ " м");
        ui->slrR0LabelA->setText(QString::number(R0)+ " м");
        ui->slrRxLabelA->setText(QString::number(Rx)+ " м");
    } else {
        h = slr.fullHeightB(hx, Rx);
        h0 = slr.protectionZoneHeightB(h);
        R0 = slr.protectionZoneBoundaryB(h);

        ui->slrhLabelB->setText(QString::number(h)+ " м");
        ui->slrh0LabelB->setText(QString::number(h0)+ " м");
        ui->slrR0LabelB->setText(QString::number(R0)+ " м");
        ui->slrRxLabelB->setText(QString::number(Rx)+ " м");
    }
}


void MainWindow::on_distanceFromWallToLightningDoubleSpinBoxSLR_valueChanged(double arg1)
{
    whichLightningRodSelected();
}

void MainWindow::calcSLC() {

    double L = ui->objectLengthDoubleSpinBox->value();
    double l = ui->distanceFromWallToLightningDoubleSpinBoxSLC->value();
    double hx = ui->objectHeightDoubleSpinBox->value();
    double S = ui->objectWidthDoubleSpinBox->value();
    double Rx = sqrt(pow(L / 2, 2) + pow(S + l, 2));
    singleCabelRod scr;


    double h, h0, R0;

    if (zoneType == ZoneTypeModel::A) {
        h = scr.fullHeightA(hx, Rx);
        R0 = scr.radiusOfZoneProtectionZoneA(h);
        h0 = scr.heightOfZoneProtectionZoneA(h);

        ui->slchLabelA->setText(QString::number(h)+ " м");
        ui->slcRxLabelA->setText(QString::number(Rx)+ " м");
        ui->slcR0LabelA->setText(QString::number(R0)+ " м");
        ui->slch0LabelA->setText(QString::number(h0)+ " м");


    } else {
        h = scr.fullHeightB(hx, Rx);
        R0 = scr.radiusOfZoneProtectionZoneB(h);
        h0 = scr.heightOfZoneProtectionZoneB(h);

        ui->slchLabelB->setText(QString::number(h)+ " м");
        ui->slcRxLabelB->setText(QString::number(Rx)+ " м");
        ui->slcR0LabelB->setText(QString::number(R0)+ " м");
        ui->slch0LabelB->setText(QString::number(h0)+ " м");
    }
}

void MainWindow::on_distanceFromWallToLightningDoubleSpinBoxSLC_valueChanged(double arg1)
{
    whichLightningRodSelected();
}


void MainWindow::calcDLR() {

    doublelightningrod dlr;
    double hc, L, h, Rc, Rcx;
    double objectHeight = ui->objectHeightDoubleSpinBox->value();



    if (zoneType == ZoneTypeModel::A) {
        L = ui->distanceBetweenRodsDoubleSpinBoxDLR->value();
        hc = ui->distanceFromWallToRodDoubleSpinBoxDLR->value();
        h = dlr.fullHeightA(hc, L);

        if (L <= h) {
            ui->lConditionStackedDLR_A->setCurrentIndex(0);

            Rc = dlr.radiusOfZoneProtectionLEZoneA(h);
            Rcx = dlr.radiuseHeightProtectionOnHeightLEZoneA(h, objectHeight);

            ui->dlr_h_A_LE->setText(QString::number(h)+ " м");
            ui->dlr_Rc_A_LE->setText(QString::number(Rc)+ " м");
            ui->dlr_Rcx_A_LE->setText(QString::number(Rcx)+ " м");
        } else if (h < L && L < 6*h) {
            ui->lConditionStackedDLR_A->setCurrentIndex(1);

            Rc = dlr.radiusOfZoneProtectionLLZoneA(h);
            Rcx = dlr.radiuseHeightProtectionOnHeightLLZoneA(h, hc, objectHeight);

            ui->dlr_h_A_LL->setText(QString::number(h)+ " м");
            ui->dlr_Rc_A_LL->setText(QString::number(Rc)+ " м");
            ui->dlr_Rcx_A_LL->setText(QString::number(Rcx)+ " м");
        } else {
            ui->lConditionStackedDLR_A->setCurrentIndex(2);
        }
    } else {
        L = ui->distanceBetweenRodsDoubleSpinBoxDLR->value();
        hc = ui->distanceFromWallToRodDoubleSpinBoxDLR->value();
        h = dlr.fullHeightB(hc, L);

        if (L <= h) {
            ui->lConditionStackedDLR_B->setCurrentIndex(0);

            Rc = dlr.radiusOfZoneProtectionLEZoneB(h);
            Rcx = dlr.radiuseHeightProtectionOnHeightLEZoneB(h, objectHeight);

            ui->dlr_h_B_LE->setText(QString::number(h)+ " м");
            ui->dlr_Rc_B_LE->setText(QString::number(Rc)+ " м");
            ui->dlr_Rcx_B_LE->setText(QString::number(Rcx)+ " м");
        } else if (h < L && L < 6*h) {
            ui->lConditionStackedDLR_B->setCurrentIndex(1);

            Rc = dlr.radiusOfZoneProtectionLLZoneB(h);
            Rcx = dlr.radiuseHeightProtectionOnHeightLLZoneB(h, Rc, hc, objectHeight);

            ui->dlr_h_B_LL->setText(QString::number(h)+ " м");
            ui->dlr_Rc_B_LL->setText(QString::number(Rc)+ " м");
            ui->dlr_Rcx_B_LL->setText(QString::number(Rcx)+ " м");
        } else {
            ui->lConditionStackedDLR_B->setCurrentIndex(2);
        }

    }
}


void MainWindow::on_distanceBetweenRodsDoubleSpinBoxDLR_valueChanged(double arg1)
{
    whichLightningRodSelected();
}


void MainWindow::on_distanceFromWallToRodDoubleSpinBoxDLR_valueChanged(double arg1)
{
    whichLightningRodSelected();
}

void MainWindow::calcDLC() {
    doubleCabelRod dcr;
    double objectHeight = ui->objectHeightDoubleSpinBox->value();
    double L = ui->distanceBetweenCablesDoubleSpinBoxDLC->value();
    double h, Rc, Rcx, R0;
    double hc = ui->middleOfDistanceBetweenLR_DLC->value();


    if (zoneType == ZoneTypeModel::A) {

        h = dcr.fullHeightA(hc, L);
        R0 = dcr.radiusZoneProtectionZoneA(h);

        if (L <= h) {
            ui->lConditionStackedDLC_A->setCurrentIndex(0);

            Rc = dcr.radiusCLEZoneA(h);
            Rcx = dcr.radiusCXLEZoneA(h, objectHeight);

            ui->dlc_h_A_LE->setText(QString::number(h)+ " м");
            ui->dlc_Rc_A_LE->setText(QString::number(Rc)+ " м");
            ui->dlc_Rcx_A_LE->setText(QString::number(Rcx)+ " м");
        } else if (h < L && L <= 2*h) {
            ui->lConditionStackedDLC_A->setCurrentIndex(1);

            Rc = dcr.radiusC1LL2ZoneA(h);
            Rcx = dcr.radiusCX1LL2ZoneA(R0 ,hc, objectHeight);

            ui->dlc_h_A_hLL2h->setText(QString::number(h)+ " м");
            ui->dlc_Rc_A_hLL2h->setText(QString::number(Rc)+ " м");
            ui->dlc_Rcx_A_hLL2h->setText(QString::number(Rcx)+ " м");
        } else if (2*h < L && L <= 4*h) {
            ui->lConditionStackedDLC_A->setCurrentIndex(2);

            Rc = dcr.radiusC2LL4ZoneA(R0, h, L);
            Rcx = dcr.radiusCX2LL4ZoneA(Rc ,hc, objectHeight);

            ui->dlc_h_A_2hLL4h->setText(QString::number(h)+ " м");
            ui->dlc_Rc_A_2hLL4h->setText(QString::number(Rc)+ " м");
            ui->dlc_Rcx_A_2hLL4h->setText(QString::number(Rcx)+ " м");
        } else {
            ui->lConditionStackedDLC_A->setCurrentIndex(3);

        }
    } else {
        h = dcr.fullHeightB(hc, L);
        R0 = dcr.radiusZoneProtectionZoneB(h);

        if (L <= h) {
            ui->lConditionStackedDLC_B->setCurrentIndex(0);

            Rc = dcr.radiusCLEZoneB(h);
            Rcx = dcr.radiusCXLEZoneB(h, objectHeight);

            ui->dlc_h_B_LE->setText(QString::number(h)+ " м");
            ui->dlc_Rc_B_LE->setText(QString::number(Rc)+ " м");
            ui->dlc_Rcx_B_LE->setText(QString::number(Rcx)+ " м");
        } else if (h < L && L < 6*h) {
            ui->lConditionStackedDLC_B->setCurrentIndex(1);

            Rc = dcr.radiusC1LL6ZoneB(h);
            Rcx = dcr.radiusCX1LL6ZoneB(R0, hc, objectHeight);

            ui->dlc_h_B_LL->setText(QString::number(h)+ " м");
            ui->dlc_Rc_B_LL->setText(QString::number(Rc)+ " м");
            ui->dlc_Rcx_B_LL->setText(QString::number(Rcx)+ " м");
        } else {
            ui->lConditionStackedDLC_B->setCurrentIndex(2);
        }
    }
}

void MainWindow::on_distanceBetweenCablesDoubleSpinBoxDLC_valueChanged(double arg1)
{
    whichLightningRodSelected();
}

void MainWindow::on_middleOfDistanceBetweenLR_DLC_valueChanged(double arg1)
{
    whichLightningRodSelected();
}


void MainWindow::calcExpectedStrikesNumber() {
    QLabel *expectedStrikesNumberResult = ui->expectedStrikesNumberResult;

    double L = ui->objectLengthDoubleSpinBox->value();
    double h = ui->objectHeightDoubleSpinBox->value();
    double S = ui->objectWidthDoubleSpinBox->value();

    if ((L == 0 || h == 0 || S == 0) && buildingType != BuildingTypeModel::TallTower) {
        expectedStrikesNumberResult->setText("Ошибка");
        expectedStrikesNumberResult->setStyleSheet("QLabel {border: 1px solid black;border-radius: 15px;background-color: red;padding: 0px 0px 0px 0px;}");
        N = 0;
        calcZoneType();
        return;
    }

    if (buildingType == BuildingTypeModel::TallTower && h == 0) {
        expectedStrikesNumberResult->setText("Ошибка");
        expectedStrikesNumberResult->setStyleSheet("QLabel {border: 1px solid black;border-radius: 15px;background-color: red;padding: 0px 0px 0px 0px;}");
        N = 0;
        calcZoneType();
        return;
    }

    //N = (S + 6h)(L + 6h)n ∙ 10^–6

    if (buildingType == BuildingTypeModel::TallTower) {
        N = 9 * M_PI * pow(h, 2) * n * pow(10, -6);
    } else {
        N = (S + 6 * h) * (L + 6 * h) * n * pow(10, -6);
    }

    expectedStrikesNumberResult->setText(QString::number(N));

    expectedStrikesNumberResult->setStyleSheet("QLabel {border: 1px solid black;border-radius: 15px;background-color: green;padding: 0px 0px 0px 0px;}");

    calcZoneType();

}

void MainWindow::on_objectLengthDoubleSpinBox_valueChanged(double arg1)
{
    calcExpectedStrikesNumber();
}

void MainWindow::on_objectWidthDoubleSpinBox_valueChanged(double arg1)
{
    calcExpectedStrikesNumber();
}

void MainWindow::on_objectHeightDoubleSpinBox_valueChanged(double arg1)
{
    calcExpectedStrikesNumber();
}

void MainWindow::on_distanceFromWallToLightningDoubleSpinBox_valueChanged(double arg1)
{

}

void MainWindow::on_lightningIntensitySpinBox_valueChanged(int arg1)
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
            n = 0;
            lightningIntensity = 0;
            lightningStrikesAverageResult->setStyleSheet("QLabel {border: 1px solid black;border-radius: 15px;background-color: red;padding: 0px 0px 0px 0px;}");
        }

        calcExpectedStrikesNumber();
}



