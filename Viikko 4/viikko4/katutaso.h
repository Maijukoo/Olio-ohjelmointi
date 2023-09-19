#ifndef KATUTASO_H
#define KATUTASO_H
#include <iostream>
#include "asunto.h"
#include "kerros.h"
using namespace std;


class Katutaso : public Kerros
{
public:
    Katutaso();
    void maaritaAsunnot();
    double laskeKulutus(double);
    Asunto as1, as2;
};

#endif // KATUTASO_H
