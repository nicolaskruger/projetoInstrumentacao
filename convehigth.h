#ifndef CONVEHIGTH_H
#define CONVEHIGTH_H
#include "convert.h"

class conveHigth: public convert
{
public:
    conveHigth();
    ~conveHigth();
    QString conv(int n) override;
};

#endif // CONVEHIGTH_H
