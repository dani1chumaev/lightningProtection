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

    void calcZoneType();

private slots:
    void on_nextPageBtn_clicked();

    void on_previousPageBtn_clicked();

    void on_LightningIntensityMap_clicked();

    void on_toolBox_currentChanged(int index);

    void on_comboBox_3_currentIndexChanged(const QString &arg1);

    void on_lightningStrikesAverageCalcBtn_clicked();

    void on_expectedStrikesNumberCaclBtn_clicked();

    void on_protectionZoneAndProtectionCategoryCalcBtn_clicked();

    void on_refractorinessComboBox_currentIndexChanged(const QString &arg1);

    void on_buildingTypeComboBox_currentIndexChanged(int index);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
