#include <iostream>
#include "canondefensivo.h"
#include "canonofensivo.h"
#include <vector>
using namespace std;
// canonofensivo *ofensivo = new canonofensivo;
 canonofensivo ofensivo;
int main()
{
    vector <int>anguloO;
    vector <int>velO;

    vector <int>anguloD;
    vector <int>velD;


    int Voo, aux, aux2=1, aux3=1;

    cout << "Ingrese Vo para empezar a probar: ";
    cin >> Voo;

    canonofensivo *ofensivo = new canonofensivo;

    CanonDefensivo *defensivo = new CanonDefensivo;


    cout << "*********** Disparos Ofensivos contra el canon Defensivo ***********"<<endl;
    cout << endl;
    ofensivo->DispOfensivo(Voo);

    cout << "*********** Disparos Defensivos contra el canon Ofensivo ************"<<endl;
    cout << endl;
    defensivo->DispDefensivos(Voo);


    //obtener vectores de angulo y velocidad para hacer disparos defensivos desde el cañon defensivo
    anguloO = ofensivo->getAngleoo1();
    velO = ofensivo->getVooo1();

    //disparos desde el defensivo para cada disparo del ofensivo (sin restricción)
    cout << "************ Disparos Defensivos contra el disparo Ofensivo SIN restriccion ************"<<endl;
    for(auto n = anguloO.rbegin();n !=anguloO.rend();n++ )
    {
        for (auto l = velO.rbegin(); l != velO.rend(); l++)
        {
            if(aux2 == aux3){
                aux = *l;
                break;
            }
            aux3++;
        }
        aux2 ++;
        aux3 =1;
        cout <<"_____Datos del tiro Ofensivo (despues de 2 segundos):_______"<<endl;
        cout << "Disparo con un angulo de " << *n << " grados" << endl;
        cout << "Disparo con velocidad incial " << aux << endl;
        defensivo->DispDefensivos2(Voo, *n, aux);
    }


    aux = 0;
    aux2 = 1;
    aux3 = 1;

     //disparos desde el defensivo para cada disparo del ofensivo (CON restricción)
    cout << "************ Disparos Defensivos contra el disparo Ofensivo CON restriccion ************"<<endl;
    for(auto n = anguloO.rbegin();n !=anguloO.rend();n++ )
    {
        for (auto l = velO.rbegin(); l != velO.rend(); l++)
        {
            if(aux2 == aux3){
                aux = *l;
                break;
            }
            aux3++;
        }
        aux2 ++;
        aux3 =1;
        cout <<"_____Datos del tiro Ofensivo (despues de 2 segundos):_______"<<endl;
        cout << "Disparo con un angulo de " << *n << " grados" << endl;
        cout << "Disparo con velocidad incial " << aux << endl;
        defensivo->DispDefensivos2(Voo, *n, aux);
    }

    return 0;
}
