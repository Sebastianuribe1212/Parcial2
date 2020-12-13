#include "canondefensivo.h"

float CanonDefensivo::getD() const
{
    return d;
}

void CanonDefensivo::setD()
{
    d = 800;
    Xd = d;

}

void CanonDefensivo::setD(float value)
{
    d = value;
    Xd = d;
}

float CanonDefensivo::getXd() const
{
    return Xd;
}

float CanonDefensivo::getYd() const
{
    return Yd;
}

float CanonDefensivo::getHd() const
{
    return Hd;
}

void CanonDefensivo::setHd()
{
    Hd =20;
    Yd = Hd;
}

void CanonDefensivo::setHd(float value)
{
    Hd = value;
    Yd = Hd;
}
CanonDefensivo::CanonDefensivo()
{   setD();
    setHd();
    d0 = 0.05*d;
    Xd = 0;

}

