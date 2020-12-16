#ifndef ENUMS_H
#define ENUMS_H

#include <QObject>

class Enums : public QObject
{
    Q_OBJECT
public:
    explicit Enums(QObject *parent = nullptr);

    enum test {
        C= 0,
        O= 1,
        P = 2,
        T = 3,
        Tj =4
    };


signals:

};

#endif // ENUMS_H
