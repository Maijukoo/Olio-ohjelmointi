#ifndef CHEF_H
#define CHEF_H
#include <iostream>
#include "italianchef.h"

using namespace std;

class chef
{
public:
    chef(string);
    void makeSalad();
    void makeSoup();


protected:
    string name;
};

#endif // CHEF_H
