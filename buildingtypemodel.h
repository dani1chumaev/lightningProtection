#ifndef BUILDINGTYPEMODEL_H
#define BUILDINGTYPEMODEL_H

#include <QObject>

class BuildingTypeModel : public QObject
{
    Q_OBJECT
public:
    explicit BuildingTypeModel(QObject *parent = nullptr);

    enum Building {
        Common,
        Open,
        Public,
        Towering,
        TallTower
    };
    Q_ENUM(Building)

signals:

};

#endif // BUILDINGTYPEMODEL_H
