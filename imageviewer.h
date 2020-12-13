#ifndef IMAGEVIEWER_H
#define IMAGEVIEWER_H

#include <QMainWindow>

namespace Ui {
class imageViewer;
}

class imageViewer : public QMainWindow
{
    Q_OBJECT

public:
    explicit imageViewer(QWidget *parent = nullptr);
    ~imageViewer();

private:
    Ui::imageViewer *ui;
};

#endif // IMAGEVIEWER_H
