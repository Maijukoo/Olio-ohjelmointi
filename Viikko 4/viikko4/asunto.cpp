#include "asunto.h"

Asunto::Asunto()
{
    cout<<"Asunto luotu"<<endl;

}

void Asunto::maarita(int a, int n)
{
    asukasMaara = a;
    neliot = n;
    cout<<"Asunto maaritetty asukkaita = "<<asukasMaara<<" nelioita = "<<neliot<<endl;

}

double Asunto::laskeKulutus(double h)
{
    double kulutus = h * asukasMaara * neliot;
    cout<<"Asunnon kulutus, kun hinta = "<<h<<" on "<<kulutus<<endl;
    return kulutus;

}
