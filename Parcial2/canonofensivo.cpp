#include "canonofensivo.h"

float canonofensivo::getD() const
{
    return d;
}

void canonofensivo::setD()
{
    d = 800;
}

void canonofensivo::setD(float value)
{
    d = value;
}

float canonofensivo::getHo() const
{
    return Ho;
}

void canonofensivo::setHo()
{
    Ho =100;
    Yo = Ho;
}

void canonofensivo::setHo(float value)
{
    Ho = value;
}

canonofensivo::canonofensivo()
{

}
