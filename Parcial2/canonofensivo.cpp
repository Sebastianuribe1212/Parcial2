#include "canonofensivo.h"

canonofensivo::canonofensivo()
{

    d = 800;
    Ho =100;
    d0 = 0.05*d;
    Xo = 0;
    Yo = Ho;


}

float canonofensivo::getXo() const
{
    return Xo;
}

float canonofensivo::getYo() const
{
    return Yo;
}

vector<int> canonofensivo::getVooo1() const
{
    return Vooo1;
}

vector<int> canonofensivo::getAngleoo1() const
{
    return angleoo1;
}



float canonofensivo::getD() const
{
    return d;
}


float canonofensivo::getHo() const
{
    return Ho;
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
    CanonDefensivo *disparoD;
    disparoD = new CanonDefensivo();
    for(V0o = Voo; ; V0o += 5){
        for(angle = 0; angle < 90; angle++){
            Vxo = V0o*cos(angle*pi/180);
            Vy0 = V0o*sin(angle*pi/180);
            x = 0.0;
            y = 0.0;
            for(t = 0; ; t++){
                x = Vxo*t;
                y = (Yo + Vy0*t) -(0.5*g*(t*t));
                if(sqrt(pow((disparoD->getXd() - x),2)+pow((disparoD->getYd() - y),2)) < d0){
                    if(y<0) y = 0;
                    ImprResultados(angle, V0o, x, y, t);
                    Vooo1.push_back(V0o);
                    angleoo1.push_back(angle);
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






