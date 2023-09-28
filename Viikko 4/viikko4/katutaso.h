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
    Asunto as1;
    Asunto as2;
    virtual void maaritaAsunnot(void) override;
    double laskeKulutus(double);
};

#endif // KATUTASO_H
