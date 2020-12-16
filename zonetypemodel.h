#ifndef ZONETYPEMODEL_H
#define ZONETYPEMODEL_H

#include <QObject>

class ZoneTypeModel : public QObject
{
    Q_OBJECT
public:
    explicit ZoneTypeModel(QObject *parent = nullptr);

    enum ZoneType {
        A,
        B
    };
    Q_ENUM(ZoneType)

signals:

};

#endif // ZONETYPEMODEL_H
