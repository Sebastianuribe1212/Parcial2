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

    ofensivo->DispOfensivo(Voo);

    return 0;
}
