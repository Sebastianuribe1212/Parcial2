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

void CanonDefensivo::DispDefensivos(int Voo)
{
    int flag = 0;
    float x,y;
    float Vxo,Vy0;
    int V0o = 0;
    int t = 0;
    int angle = 0;
    canonofensivo *disparoO;
    disparoO = new canonofensivo();
    for(V0o = Voo; ; V0o += 5){
        for(angle = 0; angle < 90; angle++){
            Vxo = V0o*cos((angle)*pi/180);
            Vy0 = V0o*sin((angle)*pi/180);
            x = 0.0;
            y = 0.0;
            for(t = 0; ; t++){
                x = Vxo*t;
                y = Yd + Vy0*t -(0.5*g*t*t);
                if(sqrt(pow((disparoO->getD() - x),2)+pow((disparoO->getYo() - y),2)) < d0){
                    if(y<0) y = 0;
                    ImprResultados(angle, V0o, x, y, t);
                    flag += 1;
                    V0o += 50;
                    break;
                }
                if(y < 0){
                    break;
                }
            }
            if(flag == 3) break;


        }
        if(flag == 3) break;
    }
    if(flag != 3){
        cout << "No impacto en los disparos esperados"<< endl;
    }
}






/*
void CanonDefensivo::setHd(float value)
{
    Hd = value;
    Yd = Hd;
}*/


