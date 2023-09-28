#include "kerros.h"
#include "asunto.h"

Kerros::Kerros()
{
    cout << "Kerros luotu" << endl;
    as1 = new Asunto;
    as2 = new Asunto;
    as3 = new Asunto;
    as4 = new Asunto;
}

void Kerros::maaritaAsunnot()
{
    cout << "Maaritetaan 4kpl kerroksen asuntoja" << endl;
    as1->maarita(2, 100);
    as2->maarita(2, 100);
    as3->maarita(2, 100);
    as4->maarita(2, 100);
}

double Kerros::laskeKulutus(double hinta)
{
    double kulutus = as1->laskeKulutus(hinta) + as2->laskeKulutus(hinta) + as3->laskeKulutus(hinta) + as4->laskeKulutus(hinta);
    return kulutus;
}


Kerros::~Kerros()
{
    delete as1;
    delete as2;
    delete as3;
    delete as4;
}

