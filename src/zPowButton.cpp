#include "zPowButton.h"

zPowButton::zPowButton()
    :m_t(0)
{}

void zPowButton::paint(NVGcontext *vg)
{
    drawPowerButton(vg, 0, 0, width(), height());
}
