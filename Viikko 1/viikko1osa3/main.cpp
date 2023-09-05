#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int GuessTheNumber();


int main()
{

    int maxnum = GuessTheNumber();
    cout<<"You guessed the number in "<<maxnum<<" attemps"<<endl;

    return 0;
}

int GuessTheNumber() {

    int max;
    cout<<"Give the maximum limit: "<<endl;
    cin>> max;

    int playersGuess;
    int maxnum = 0;


    srand(time(NULL));
    int randomNumber = (rand() % (max - 1 + 1)) +1;

    while (true) {
       cout <<"Guess a number: "<<endl;
       cin>> playersGuess;
       maxnum++;

       if(randomNumber > playersGuess) {
          cout<<"Random number is bigger than the number you guessed"<<endl;
       }
       if(randomNumber < playersGuess) {
          cout<<"Random number is smaller than the number you guessed"<<endl;
       }
       if(randomNumber == playersGuess) {
          cout<<"Correct answer"<<endl;
          break;
       }

    }
    return maxnum;
}

