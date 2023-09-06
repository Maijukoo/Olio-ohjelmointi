#include "game.h"
#include <ctime>

game::game(int m)
{
    maxNumber = m;
    cout<<"GAME CONSTRUCTOR: object initialized with "<<maxNumber<<" as a maximum value"<<endl;
}

game::~game()
{
    cout<<"GAME DESTRUCTOR: object cleared from stack memory"<<endl;

}

void game::play()
{
    numOfGuesses = 0;
    srand(time(NULL));
        randomNumber = (rand() % (maxNumber - 1 + 1)) +1;

        while (true) {
           cout <<"Give your guess between 1- "<<maxNumber<<endl;
           cin>> playerGuess;
           numOfGuesses++;

           if(randomNumber > playerGuess) {
              cout<<"Your guess is too small"<<endl;
           }
           if(randomNumber < playerGuess) {
              cout<<"Your guess is too big"<<endl;
           }
           if(randomNumber == playerGuess) {
              cout<<"Your guess is right = "<<randomNumber<<endl;
              break;
           }
        }
    printGameResult();


}

void game::printGameResult()
{
    cout<<"You guessed the right answer = "<<randomNumber<<" with "<<numOfGuesses<<" guesses"<<endl;

}
