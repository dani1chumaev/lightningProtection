#include <QTextEdit>
#include "qcontexttextedit.h"


QSize QContextTextEdit::sizeHint() const {
    QSize s(document()->size().toSize());

    s.rwidth() = std::max(100, s.width());
    s.rheight() = std::max(100, s.height());
    return (s);
}

QContextTextEdit::QContextTextEdit(QWidget *parent) : QTextEdit(parent) {
    setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}

void QContextTextEdit::resizeEvent(QResizeEvent *event) {
    updateGeometry();
    QTextEdit::resizeEvent(event);
};