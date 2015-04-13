#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */

int main ()
{
    int randomNumber;
    int userGuess;
    
    //int exitCode;
    
    /* initialize random seed: */
    srand (time(NULL));
    
    /* generate random number between 1 and 100 */
    randomNumber = rand() % 100 + 1;
    
    do {
        std::cout << "Pick a number between 1 and 100. Otherwise, press 0 to exit ";
        
        scanf ("%d", &userGuess);
        
        if (userGuess == 0){
            std::cout << "Exiting the game... Thanks for playing!" << std::endl;
            exit(0);
        }
        if (randomNumber > userGuess){
            std::cout << "Try a bigger number than " << userGuess << "!" << std::endl;
        }
        else if (randomNumber < userGuess){
            std::cout << "Try a smaller number than " << userGuess << "!" << std::endl;
        }
    } while (userGuess != randomNumber);
    
    std::cout << "Correct! Thanks for playing!" << std::endl;
    return 0;
}