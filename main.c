#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()

{
    srand(time(NULL));
    int guessNumber = 0;
    int myNumber;
    int numberOfGuesses = 5;
    int numberOfAttempt = 0;
    myNumber = rand() % 10 + 1;
    printf("*** Guessing Game ***");
    printf("\n\n\n");
    printf("I have selected a number from 1 - 10. Guess what is it\n");
    printf("Guess a number: ");
    scanf("%d", &guessNumber);
    /*
    do{
        if(guessNumber > myNumber){
            printf("Guess Left (%d)", numberOfGuesses);
            printf("Too high. Guess again\n");
            printf("Enter a number: ");
            scanf("%d", &guessNumber);
            numberOfGuesses--;
            continue;
        }else if(guessNumber < myNumber){
            printf("Guess Left (%d)", numberOfGuesses);
            printf("Too low. Guess again\n");
            printf("Enter a number: ");
            scanf("%d", &guessNumber);
            numberOfGuesses--;
            continue;
        } else {
            printf("You guess it correctly. My number is %d", myNumber);
            return 0;
        }
    }while(numberOfGuesses != 0);

    printf("You lose. My number is %d", myNumber);
    */

    /*
    while(numberOfGuesses != 0){
        if(guessNumber > myNumber){
            printf("Guess Left (%d)", numberOfGuesses);
            printf("Too high. Guess again\n");
            printf("Enter a number: ");
            scanf("%d", &guessNumber);
            numberOfGuesses--;
            continue;
        }else if(guessNumber < myNumber){
            printf("Guess Left (%d)", numberOfGuesses);
            printf("Too low. Guess again\n");
            printf("Enter a number: ");
            scanf("%d", &guessNumber);
            numberOfGuesses--;
            continue;
        } else {
            printf("You guess it correctly. My number is %d", myNumber);
            return 0;
        }
    }
    printf("You Lose.");
    */
    for(numberOfAttempt = 0; numberOfAttempt <= 5; numberOfAttempt++){
        if(guessNumber > myNumber){
            printf("Guess Left (%d)", numberOfGuesses);
            printf("Too high. Guess again\n");
            printf("Enter a number: ");
            scanf("%d", &guessNumber);
            numberOfGuesses--;
            continue;
        }else if(guessNumber < myNumber){
            printf("Guess Left (%d)", numberOfGuesses);
            printf("Too low. Guess again\n");
            printf("Enter a number: ");
            scanf("%d", &guessNumber);
            numberOfGuesses--;
            continue;
        } else {
            printf("You guess it correctly. My number is %d", myNumber);
            return 0;
        }
    }   printf("You Lose.");
}
