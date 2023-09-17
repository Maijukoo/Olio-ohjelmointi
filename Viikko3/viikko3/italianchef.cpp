#include "italianchef.h"

using namespace std;

italianchef::italianchef(string n):chef(n)
{
    //cout<<"Chef "<<name<<" konstruktori"<<endl;
}

string italianchef::getName()
{
    return "huuhaa";
}

void italianchef::makePasta()
{
    cout<<"Chef "<<name<<" makes pasta"<<endl;
}

italianchef::~italianchef()
{
    //cout<<"Chef "<<name<<" destruktori"<<endl;
}
