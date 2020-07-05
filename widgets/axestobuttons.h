#ifndef AXESTOBUTTONS_H
#define AXESTOBUTTONS_H

#include <QWidget>
#include "axestobuttonsslider.h"

#include "global.h"
#include "deviceconfig.h"

namespace Ui {
class AxesToButtons;
}

class AxesToButtons : public QWidget
{
    Q_OBJECT

public:
    explicit AxesToButtons(int a2b_number, QWidget *parent = nullptr);
    ~AxesToButtons();

    void ReadFromConfig();
    void WriteToConfig();

private slots:
    void a2bCountChanged(int count);
    void a2bCheckBoxValueChanged(bool value);

private:
    Ui::AxesToButtons *ui;
    int a2b_number_;
};

#endif // AXESTOBUTTONS_H
