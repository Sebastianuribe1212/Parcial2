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
    float Xd = 0;
    float Yd;
    float d0 = 0.05*d;
public:
    CanonDefensivo();
    float getD() const;
    void setD();
    void setD(float value);

    float getHd() const;
    void setHd();
    void setHd(float value);


};

#endif // CANONDEFENSIVO_H
