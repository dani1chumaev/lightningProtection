#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qmainwindow.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void calcSLR();

    void calcSLC();

    void calcDLR();

    void calcDLC();

    void calcZoneType();

    void changeGuiWhileCalcZoneType();

    void calcExpectedStrikesNumber();

    void whichLightningRodSelected();

private slots:

    void on_LightningIntensityMap_clicked();

    void on_toolBox_currentChanged(int index);

    void on_comboBox_3_currentIndexChanged(const QString &arg1);

    void on_refractorinessComboBox_currentIndexChanged(const QString &arg1);

    void on_buildingTypeComboBox_currentIndexChanged(int index);

    void on_singleRadioBtn_clicked();

    void on_doubleRadioBtn_clicked();

    void on_rodRadioBtn_clicked();

    void on_cableRadioBtn_clicked();

    void on_objectLengthDoubleSpinBox_valueChanged(double arg1);

    void on_objectWidthDoubleSpinBox_valueChanged(double arg1);

    void on_objectHeightDoubleSpinBox_valueChanged(double arg1);

    void on_distanceFromWallToLightningDoubleSpinBox_valueChanged(double arg1);

    void on_lightningIntensitySpinBox_valueChanged(int arg1);

    void on_distanceBetweenRodsDoubleSpinBoxDLR_valueChanged(double arg1);

    void on_distanceFromWallToRodDoubleSpinBoxDLR_valueChanged(double arg1);

    void on_distanceBetweenCablesDoubleSpinBoxDLC_valueChanged(double arg1);

    void on_distanceFromWallToLightningDoubleSpinBoxSLR_valueChanged(double arg1);

    void on_distanceFromWallToLightningDoubleSpinBoxSLC_valueChanged(double arg1);

    void on_middleOfDistanceBetweenLR_DLC_valueChanged(double arg1);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
