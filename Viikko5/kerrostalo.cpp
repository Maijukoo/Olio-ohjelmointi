#include "kerrostalo.h"
#include "kerros.h"
#include "katutaso.h"
#include "asunto.h"

Kerrostalo::Kerrostalo()
{
    cout << "Kerrostalo luotu" << endl;
    cout << "Maaritellaan koko kerrostalon kaikki asunnot" << endl;
    eka = new Katutaso;
    toka = new Kerros;
    kolmas = new Kerros;

    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double hinta)
{
    double katutasonKulutus = eka->laskeKulutus(hinta);
    double kerrostenKulutus = toka->laskeKulutus(hinta) + kolmas->laskeKulutus(hinta);
    return katutasonKulutus + kerrostenKulutus;
}



Kerrostalo::~Kerrostalo()
{

    delete eka;
    delete toka;
    delete kolmas;
}

