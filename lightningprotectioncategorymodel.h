#ifndef LIGHTNINGPROTECTIONCATEGORYMODEL_H
#define LIGHTNINGPROTECTIONCATEGORYMODEL_H

#include <QObject>

class LightningProtectionCategoryModel : public QObject
{
    Q_OBJECT
public:
    explicit LightningProtectionCategoryModel(QObject *parent = nullptr);

    enum LightningProtectionCategory {
        I,
        II,
        III,
        IV,
        V
    };
    Q_ENUM(LightningProtectionCategory)

    static QString getString(LightningProtectionCategory lightningProtectionCategory);

signals:

};

#endif // LIGHTNINGPROTECTIONCATEGORYMODEL_H
