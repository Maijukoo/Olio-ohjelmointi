#include "asunto.h"

Asunto::Asunto()
{

}

void Asunto::maarita(int a, int n)
{
    asukasMaara = a;
    neliot = n;

}

double Asunto::laskeKulutus(double hinta)
{
    double kulutus = hinta * asukasMaara * neliot;

    return kulutus;
}

