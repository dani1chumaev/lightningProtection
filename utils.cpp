#include "utils.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <iostream>
#include <fstream>

Utils::Utils()
{

}

QString Utils::readFile(QString path) {
    QFile file(path);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QMessageBox::information(0, "error", file.errorString());
        return "";
    }

    QString text = "";
    QTextStream in(&file);

    while (!in.atEnd()) {
        in.setCodec("UTF-8");
        text.append(in.readLine());
    }

    return text;
}
