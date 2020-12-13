#ifndef CANONDEFENSIVO_H
#define CANONDEFENSIVO_H

#include <iostream>
#include <math.h>
#include <vector>

#define g 9.81
#define pi 3.141617

using namespace std;

class CanonDefensivo
{
private:
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

    ImprResultados(int angulo, int V0o, float x, float y, int t);


};

#endif // CANONDEFENSIVO_H
