#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

int main(){

srand(time(NULL));    //Seed random number with the time of machine
int playAgain;
int diff;
int randomNumber;
int guess;
int trial;
do{ 
std::cout << "What difficulty would you like to play?" << std::endl;
std::cout << "1) Easy [1-2] 1 guess" << std::endl;
std::cout << "2) Medium [1-10] 2 guesses" << std::endl;
std::cout << "3) Hard [1-100] 3 guesses" << std::endl;
std::cin >> diff;

if (diff == 1){
    randomNumber = rand() % 2 + 1;
    std::cout << "Guess 1 or 2." << std::endl;
    std::cin >> guess;
    if (guess == randomNumber){
        std::cout << "Good Job!! You guessed right. The number was " << guess << std::endl;
    }
    else{
        std::cout <<  "Darn! You guessed wrong." << std::endl;
    }
}
else if (diff == 2){
    randomNumber = rand() % 10 + 1;
    for(trial = 1; trial <= 2; trial = trial + 1){ 
        std::cout << "Guess a number from 1 to 10." << std::endl;
        std::cin >> guess;
        if (guess == randomNumber){
            std::cout << "Good Job!! You guessed right. The number was " << guess << std::endl;
            trial = 2;
        }
        else{
            std::cout << "Darn! You guessed wrong." << std::endl;
        }
    }
}
else if (diff == 3){
    randomNumber = rand() % 100 + 1;
    for(trial = 1; trial <= 3; trial = trial + 1){
        std::cout << "Guess a number from 1 to 100" << std::endl;
        std::cin >> guess;
        if (guess == randomNumber){
            std::cout << "Good Job!! You guessed right. The number was " << guess << std::endl;
            trial = 3;
        }
        else{
            std::cout << "Darn! You guessed wrong." << std::endl;
        }
    }
}
else{
std::cout << "Error: Difficulty not found" << std::endl;
}
std::cout << "Would you like to play again?" << std::endl;
std::cout << "1) Yes" << std::endl << "2) No" << std::endl;
std::cin >> playAgain;
}
while (playAgain == 1);
}

/*
    the percent sign is a MOD function. It divides the left
    side to the right side and then outputs the remainder.
    Therefore, the "rand() % 10 + 1" line outputs a random
    number between 1 and 10.
*/
