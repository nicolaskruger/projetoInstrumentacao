#ifndef CONVERT_H
#define CONVERT_H
#include <QString>
#include <QDebug>

class convert
{
public:
    virtual QString conv(int)=0;
    virtual ~convert();
protected:
    convert();
};

#endif // CONVERT_H
