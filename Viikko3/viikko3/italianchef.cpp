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

void italianchef::makePasta(int v, int j)
{
    int vesi = v;
    int jauhot = j;
    cout<<"Chef "<<name<<" makes pasta with special recipe"<<endl;
    cout<<"Chef "<<name<<" uses vesi = "<<vesi<<endl;
    cout<<"Chef "<<name<<" uses jauhot = "<<jauhot<<endl;
}

italianchef::~italianchef()
{
    //cout<<"Chef "<<name<<" destruktori"<<endl;
}
