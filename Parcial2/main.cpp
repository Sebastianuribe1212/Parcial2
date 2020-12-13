#include <iostream>
#include "canondefensivo.h"
#include "canonofensivo.h"
using namespace std;

int main()
{
    int Voo;

    cout << "Ingrese Vo para empezar a probar: ";
    cin >> Voo;

    canonofensivo *ofensivo = new canonofensivo;
    CanonDefensivo *defensivo = new CanonDefensivo;


    cout << "---------Disparos Ofensivos-----------"<<endl;
    cout << endl;
    ofensivo->DispOfensivo(Voo);

    cout << "---------Disparos Defensivos-----------"<<endl;
    cout << endl;
    defensivo->DispDefensivos(Voo);

    return 0;
}
