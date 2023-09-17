#ifndef CHEF_H
#define CHEF_H
#include <iostream>


using namespace std;

class chef
{
public:
    chef(string);
    ~chef();
    void makeSalad();
    void makeSoup();


protected:
    string name;
};

#endif // CHEF_H
