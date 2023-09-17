#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>
#include "chef.h"

using namespace std;

class italianchef: public chef
{
public:
    italianchef(string);
    ~italianchef();
    string getName();
    void makePasta(int, int);

private:
    int vesi;
    int jauhot;
};

#endif // ITALIANCHEF_H
