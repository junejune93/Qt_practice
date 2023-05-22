#ifndef LEDKEYWIDGET_H
#define LEDKEYWIDGET_H

#include <QWidget>
#include "keyled.h"

QT_BEGIN_NAMESPACE
namespace Ui { class LedkeyWidget; }
QT_END_NAMESPACE

class LedkeyWidget : public QWidget
{
    Q_OBJECT

public:
    LedkeyWidget(QWidget *parent = nullptr);
    ~LedkeyWidget();

private:
    Ui::LedkeyWidget *ui;
    KeyLed *pKeyled;

private slots:
    void slotKeyCheckBoxUpdate(int);
};
#endif // LEDKEYWIDGET_H
