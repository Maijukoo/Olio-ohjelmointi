#include "katutaso.h"
#include "asunto.h"

Katutaso::Katutaso()
{
    cout << "Katutaso luotu" << endl;

    as1 = new Asunto;
    as2 = new Asunto;
}

void Katutaso::maaritaAsunnot()
{
    cout << "Maaritetaan 2kpl katutason asuntoja" << endl;
    as1->maarita(2, 100);
    as2->maarita(2, 100);
    cout << "Maaritetaan katutason kerrokselta perittyja asuntoja" << endl;
    this->Kerros::maaritaAsunnot();
}

double Katutaso::laskeKulutus(double hinta)
{
    double kulutus = as1->laskeKulutus(hinta) + as2->laskeKulutus(hinta) + this->Kerros::laskeKulutus(hinta);
    return kulutus;
}

Katutaso::~Katutaso()
{
    delete as1;
    delete as2;
}

