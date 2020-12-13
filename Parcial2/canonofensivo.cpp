#include "canonofensivo.h"
canonofensivo::canonofensivo()
{
    setHo();
    setD();
    d0 = 0.05*d;
    Xo = 0;


}

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

void canonofensivo::ImprResultados(int angulo, int V0o, float x, float y, int t)
{
    cout << "Impacto con un angulo de " << angulo << " grados" << endl;
    cout << "Impacto con velocidad incial " << V0o << endl;
    cout << "Impacto con posicion x: " << x << endl;
    cout << "Impacto con posicion y: " << y << endl;
    cout << "Con tiempo: " << t << endl;
    cout << endl;

}

void canonofensivo::DispOfensivo(int Voo)
{
    int flag = 0;
    float x,y;
    float Vxo,Vy0;
    int V0o = 0;
    int t = 0;
    int angle = 0;

    disparoD = new CanonDefensivo();
    for(V0o = Voo; ; V0o += 5){
        for(angle = 0; angle < 90; angle++){
            Vxo = V0o*cos(angle*pi/180);
            Vy0 = V0o*sin(angle*pi/180);
            x = 0.0;
            y = 0.0;
            for(t = 0; ; t++){
                x = Vxo*t;
                y = Yo + Vy0*t -(0.5*g*t*t);
                if(sqrt(pow((disparoD->getXd() - x),2)+pow((disparoD->getYd() - y),2)) < d0){
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






