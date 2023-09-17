#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    chef master("Gordon Ramsay");
    master.makeSalad();
    master.makeSoup();

    italianchef jr("Anthony Bourdain");
    jr.makeSalad();
    jr.makeSoup();
    jr.makePasta(100,200);
}
