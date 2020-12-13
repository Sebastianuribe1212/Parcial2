#ifndef CANONOFENSIVO_H
#define CANONOFENSIVO_H

#include <iostream>
#include <math.h>
#include <vector>
#include "canondefensivo.h"

#define g 9.81
#define pi 3.141617

using namespace std;

class canonofensivo
{
private:

    float d;
    float Ho;
    float Xo;
    float Yo;
    float d0;

public:
    canonofensivo();
    float getD() const;
    void setD();
    void setD(float value);

    float getHo() const;
    void setHo();
    void setHo(float value);

    void ImprResultados(int angulo, int V0o, float x, float y, int t);


    void DispOfensivo(int Voo);//disparo ofensivo con valores por defecto

    //void DispOfensivo(int Voo);//disparo ofensivo con valores por defecto



    float getXo() const;
    float getYo() const;
};

#endif // CANONOFENSIVO_H
