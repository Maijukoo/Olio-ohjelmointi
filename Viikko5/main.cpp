#include <iostream>
#include "kerrostalo.h"

using namespace std;

int main()
{
    Kerrostalo* talo = new Kerrostalo;

    cout << "Kerrostalon kulutus, kun hinta = 1 on " << talo->laskeKulutus(1) << endl;

    delete talo;

    return 0;
}
