#ifndef QT_CONTEXTTEXTEDIT_H
#define QT_CONTEXTTEXTEDIT_H

#include <QTextEdit>

class QContextTextEdit : public QTextEdit {
public:
    explicit QContextTextEdit(QWidget *parent = nullptr);
    virtual QSize sizeHint() const override;

protected:
    virtual void resizeEvent(QResizeEvent *event) override;
};

#endif
