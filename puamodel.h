#ifndef PUAMODEL_H
#define PUAMODEL_H

#include <QObject>

class PUAModel : public QObject
{
    Q_OBJECT
public:
    explicit PUAModel(QObject *parent = nullptr);

    enum PUA {
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
    Q_ENUM(PUA)

    static QString getString(PUA pua);

    enum Building {
        Common,
        Open,
        Public,
        Towering,
        TallTower
    };


signals:

};

#endif // PUAMODEL_H
