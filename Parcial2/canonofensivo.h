#ifndef CANONOFENSIVO_H
#define CANONOFENSIVO_H

#include <iostream>
#include <math.h>
#include <vector>

#define g 9.81
#define pi 3.141617

using namespace std;

class canonofensivo
{
private:
    float d;
    float Ho;
    float Xo = 0;
    float Yo;
    float d0 = 0.05*d;

public:
    canonofensivo();
    float getD() const;
    void setD();
    void setD(float value);

    float getHo() const;
    void setHo();
    void setHo(float value);

};

#endif // CANONOFENSIVO_H
