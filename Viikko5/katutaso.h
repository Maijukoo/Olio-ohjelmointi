#ifndef KATUTASO_H
#define KATUTASO_H
using namespace std;
#include <iostream>
#include "asunto.h"
#include "kerros.h"

class Katutaso : public Kerros
{
public:
    Katutaso();
    Asunto* as1;
    Asunto* as2;
    virtual void maaritaAsunnot(void) override;
    double laskeKulutus(double);
    virtual ~Katutaso();
};

#endif // KATUTASO_H
