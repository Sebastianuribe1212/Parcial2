#include "canonofensivo.h"

float canonofensivo::getD0() const
{
    return d0;
}

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

void canonofensivo::DispOfensivo1(int Voo, int angleoo, int Vooo)
{
    CanonDefensivo *disparoD;
    disparoD= new CanonDefensivo;

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
            Vxo = V0o*cos((angle)*pi/180);
            Vy0 = V0o*sin((angle)*pi/180);
            x = 0.0;
            y = 0.0;
            x2 = 0.0;
            y2 = 0.0;
            for(t = 0; ; t++){
                x2 = Vxoo*(t+1);
                y2 = disparoD->getYd() + Vyoo*(t+2) -(0.5*g*(t+2)*(t+2));
                x = Xo+Vxo*t;
                y = Yo + Vy0*t -(0.5*g*t*t);
                if(sqrt(pow((x - x2),2)+pow((y - y2),2)) < d0){
                    if(y<0) y = 0;
                    //cout << "__________Datos del tiro ofensivo al segundo 2: __________"<<endl;
                   //ImprResultados(angleoo,Vooo,x2,y2,t+2);
                    cout << "________________Disparo defensivo desde el Ofensivo efectuado_________________"<<endl;
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






