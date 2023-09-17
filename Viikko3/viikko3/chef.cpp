#include "chef.h"

using namespace std;

chef::chef(string n)
{
    name = n;
    cout<<"Chef "<<name<<" konstruktori"<<endl;
}

void chef::makeSalad()
{
    cout<<"Chef "<<name<<" makes salad"<<endl;
}

void chef::makeSoup()
{
    cout<<"Chef "<<name<<" makes soup"<<endl;
}

chef::~chef()
{
    cout<<"Chef "<<name<<" destruktori"<<endl;
}
