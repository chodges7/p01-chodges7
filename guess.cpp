#include <cstdlib>
#include <ctime>
#include <iostream>
#include <string>

int main(){

srand(time(NULL));    //Seed random number with the time of machine
int playAgain;
int a;
int b;
int diff;
int randomNumber;
int guess;
int trial;
do{ 
//Choose the difficulty by inputing a number from 1-4
std::cout << "What difficulty would you like to play?" << std::endl;
std::cout << "1) Easy [1-2] 1 guess" << std::endl;
std::cout << "2) Medium [1-10] 2 guesses" << std::endl;
std::cout << "3) Hard [1-100] 3 guesses" << std::endl;
std::cout << "4) Custom [1-a] b guesses" << std::endl;
std::cin >> diff;

if (diff == 1){
    randomNumber = rand() % 2 + 1;
    std::cout << "Guess 1 or 2." << std::endl;
    std::cin >> guess;
    if (guess == randomNumber){
        std::cout << "Good Job!! You guessed right." << std::endl;
    }
    else{
        std::cout <<  "Darn! You guessed wrong. The number was " << randomNumber << std::endl;
    }
}
else if (diff == 2){
    randomNumber = rand() % 10 + 1;
    for(trial = 1; trial < 2; trial++){ 
        std::cout << "Guess a number from 1 to 10." << std::endl;
        std::cin >> guess;
        if (guess == randomNumber){
            std::cout << "Good Job!! You guessed right." << std::endl;
            trial = 3;
        }
        else if(guess < randomNumber){
            std::cout << "Darn! You guessed wrong." << std::endl;
            std::cout << "GO HIGHER!" << std::endl;
        }
        else if(guess > randomNumber){
            std::cout << "Darn! You guessed wrong." << std::endl;
            std::cout << "GO LOWER!" << std::endl;
        }
    }
    if (trial == 2){
	std::cout << "Guess a number from 1 to 10." << std::endl;
        std::cin >> guess;
	if(guess == randomNumber){
		std::cout << "Good Job!! You guessed right." << std::endl;
		std::cout << "The number was " << randomNumber << std::endl;
	}
	if(guess != randomNumber){
		std::cout << "Darn! You guessed wrong." << std::endl;
		std::cout << "The number was " << randomNumber << std::endl;
	}
    }
}
else if (diff == 3){
    randomNumber = rand() % 100 + 1;
    for(trial = 1; trial < 3; trial++){
        std::cout << "Guess a number from 1 to 100" << std::endl;
        std::cin >> guess;
        if (guess == randomNumber){
            std::cout << "Good Job!! You guessed right." << std::endl;
            trial = 3;
        }
        else if(guess < randomNumber){
            std::cout << "Darn! You guessed wrong." << std::endl;
            std::cout << "GO HIGHER!" << std::endl;
        }
        else if(guess > randomNumber){
            std::cout << "Darn! You guessed wrong." << std::endl;
            std::cout << "GO LOWER!" << std::endl;
        }
    }
    if (trial == 3){
	std::cout << "Guess a number from 1 to 100." << std::endl;
        std::cin >> guess;
	if(guess == randomNumber){
		std::cout << "Good Job!! You guessed right." << std::endl;
		std::cout << "The number was " << randomNumber << std::endl;
	}
	if(guess != randomNumber){
		std::cout << "Darn! You guessed wrong." << std::endl;
		std::cout << "The number was " << randomNumber << std::endl;
	}
    }
}
else if (diff == 4){
    std::cout << "Enter your range: ";
    std::cin >> a;
    std::cout << "Amount of guesses: ";
    std::cin >> b;
    if (b >= a){
        std::cout << "You can't have more guesses than your range!" << std::endl;
    }
    if (b < a){
        randomNumber = rand() % a + 1;
        for(trial = 1; trial < b; trial++){
            std::cout << "Guess a number from 1 to " << a << std::endl;
            std::cin >> guess;
            if (guess == randomNumber){
                std::cout << "Good Job!! You guessed right." << std::endl;
                trial = b;
            }
            else if(guess < randomNumber){
                std::cout << "Darn! You guessed wrong." << std::endl;
                std::cout << "GO HIGHER!" << std::endl;
            }
            else if(guess > randomNumber){
                std::cout << "Darn! You guessed wrong." << std::endl;
                std::cout << "GO LOWER!" << std::endl;
            } 
        }
    }
    if (trial == b){
	std::cout << "Guess a number from 1 to " << a << std::endl;
        std::cin >> guess;
	if(guess == randomNumber){
		std::cout << "Good Job!! You guessed right." << std::endl;
		std::cout << "The number was " << randomNumber << std::endl;
	}
	if(guess != randomNumber){
		std::cout << "Darn! You guessed wrong." << std::endl;
		std::cout << "The number was " << randomNumber << std::endl;
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
//The reason it's a do...while statement is so the program runs at least once
// and then if the playAgain int is still 1 then the program runs again.

/*
    the percent sign is a MOD function. It divides the left
    side to the right side and then outputs the remainder.
    Therefore, the "rand() % 10 + 1" line outputs a random
    number between 1 and 10.
*/
