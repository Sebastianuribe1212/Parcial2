#include "canondefensivo.h"
vector<int> CanonDefensivo::getAngleoo2() const
{
    return angleoo2;
}

vector<int> CanonDefensivo::getVooo2() const
{
    return vooo2;
}

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
    canonofensivo *disparoO;
    disparoO = new canonofensivo;
    int flag = 0;
    float x,y;
    float Vxo,Vy0;
    int V0o = 0;
    int t = 0;
    int angle = 0;

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

void CanonDefensivo::DispDefensivos2(int Voo, int angleoo, int Vooo)
{
    canonofensivo *disparoO;
    disparoO = new canonofensivo;
    int flag = 0;
    float x,y,x2,y2;
    float Vxo,Vy0, Vxoo,Vyoo;
    int V0o = 0;
    int t = 0;
    int angle = 0;
    Vxoo = Vooo*cos((angleoo)*pi/180);
    Vyoo = Vooo*sin((angleoo)*pi/180);
    for(V0o = Voo; ; V0o += 5){
        for(angle = 0; angle < 90; angle++){
            Vxo = V0o*cos((angle+90)*pi/180);
            Vy0 = V0o*sin((angle+90)*pi/180);
            x = 0.0;
            y = 0.0;
            x2 = 0.0;
            y2 = 0.0;
            for(t = 0; ; t++){
                x2 = Vxoo*(t+2);
                y2 = disparoO->getYo() + Vyoo*(t+2) -(0.5*g*(t+2)*(t+2));
                x = Xd+Vxo*t;
                y = Yd + Vy0*t -(0.5*g*t*t);
                if(sqrt(pow((x2 - x),2)+pow((y2 - y),2)) < d0){
                    if(y<0) y = 0;
                    //cout << "__________Datos del tiro ofensivo al segundo 2: __________"<<endl;
                   //ImprResultados(angleoo,Vooo,x2,y2,t+2);
                    cout << "________________Disparo defensivo efectuado_________________"<<endl;
                    cout << "___Datos del Disparo defensivo:"<<endl;
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
        if(flag ==3) break;
    }
    if(flag != 3){
        cout << "No impacto en los disparos esperados"<< endl;
    }

}







