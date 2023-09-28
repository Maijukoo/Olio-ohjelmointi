#ifndef KERROSTALO_H
#define KERROSTALO_H
using namespace std;
#include <iostream>
#include "kerros.h"
#include "katutaso.h"

class Kerrostalo
{
public:
    Kerrostalo();
    ~Kerrostalo();
    double laskeKulutus(double);

private:
    Katutaso* eka;
    Kerros* toka;
    Kerros* kolmas;

};

#endif // KERROSTALO_H

