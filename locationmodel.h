#ifndef LOCATIONMODEL_H
#define LOCATIONMODEL_H

#include <QObject>

class LocationModel : public QObject
{
    Q_OBJECT
public:
    explicit LocationModel(QObject *parent = nullptr);

    enum Location {
        Whole,
        LightningAverage10,
        LightningAverage20
    };

    static QString getString(Location location);

signals:

};

#endif // LOCATIONMODEL_H
