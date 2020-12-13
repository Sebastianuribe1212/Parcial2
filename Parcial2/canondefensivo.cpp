#include "canondefensivo.h"
CanonDefensivo::CanonDefensivo()
{   //setD();
   // setHd();
    d = 800;
    Xd = d;
    d0 = 0.025*d;
    Hd =20;
    Yd = Hd;


}
float CanonDefensivo::getD() const
{
    return d;
}

void CanonDefensivo::setD()
{
    d = 800;
    Xd = d;

}
/*
void CanonDefensivo::setD(float value)
{
    d = value;
    Xd = d;
}*/

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
void CanonDefensivo::ImprResultados(int angulo, int V0o, float x, float y, int t)
{
    cout << "Impacto con un angulo de " << angulo << " grados" << endl;
    cout << "Impacto con velocidad incial " << V0o << endl;
    cout << "Impacto con posicion x: " << x << endl;
    cout << "Impacto con posicion y: " << y << endl;
    cout << "Con tiempo: " << t << endl;
    cout << endl;

}

/*
void CanonDefensivo::setHd(float value)
{
    Hd = value;
    Yd = Hd;
}*/


