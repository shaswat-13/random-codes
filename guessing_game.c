// a number guessing game
#include <stdio.h>

// for generating a random number
#include <stdlib.h>
#include <time.h>


int main ()
{
    
    // generates a random number between 0 and 100
    srand(time(NULL));
    int randomNum = rand() % 101;
    
    // displaying the instructions
    printf("\n\n\nWELCOME TO THE NUMBER GUESSING GAME\n\n\n");
    printf("INSTRUCTIONS: \n");
    printf("Here you have to guess a random number between 0 and 100\n");
    printf("You will get 3 guesses\n");
    printf("Good Luck!!!\n\n\n");
    
    // declaring the variables required
    int guessRemain = 3;
    int choice;
    char didWin = 'f';
    
    //loop until end of guesses or correct number guessed
    do
    {
        // getting the input
        printf("enter guess no %i: ", 4 - guessRemain);
        scanf("%i", &choice);
        
        // checking if the number is guessed
        if(choice == randomNum)
        {
            didWin = 't';
            break;
        }
        else if(choice < randomNum)
        {
            printf("Higher!\n");
        }
        else
        {
            printf("Lower!\n");
        }
        guessRemain--;
    }
    while (guessRemain != 0);
    
    // print win or loose
    if (didWin == 't')
    {
        printf("CONGRATS YOU GUESSED THE NUMBER\n");
        printf("YOU WIN\n");
    }
    else
    {
        printf("Oof!! Hard Luck, You didnt guess the number\n");
        printf("The number was: %i\n", randomNum);
    }
}
