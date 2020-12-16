#ifndef REFRACTORINESSMODEL_H
#define REFRACTORINESSMODEL_H

#include <QObject>

class RefractorinessModel : public QObject
{
    Q_OBJECT
public:
    explicit RefractorinessModel(QObject *parent = nullptr);

    enum Refractoriness {
        I,
        II,
        III,
        IV,
        V
    };
    Q_ENUM(Refractoriness)

    static QString getString(Refractoriness refractoriness);

signals:

};

#endif // REFRACTORINESSMODEL_H
