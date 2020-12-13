#ifndef CANONDEFENSIVO_H
#define CANONDEFENSIVO_H

#include <iostream>
#include <math.h>
#include <vector>
#include "canonofensivo.h"


#define g 9.81
#define pi 3.141617

using namespace std;

class CanonDefensivo
{
private:

    vector <int>angulos;
    float d;
    float Hd;
    float Xd;
    float Yd;
    float d0;
public:
    CanonDefensivo();
    float getD() const;
    void setD();
    void setD(float value);

    float getHd() const;
    void setHd(float value);
    void setHd();

    float getXd() const;


    float getYd() const;

    void ImprResultados(int angulo, int V0o, float x, float y, int t);

    void DispDefensivos(int Voo);
    void DispDefensivos2(int Voo);

};

#endif // CANONDEFENSIVO_H
