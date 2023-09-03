#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    int playersGuess;

    srand(time(NULL));
    int randomNumber = (rand() % (20 - 1 + 1)) +1;

    while (true) {
        cout <<"Guess a number: "<<endl;
        cin>> playersGuess;

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
    return 0;
}
