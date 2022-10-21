//The user has to guess a number from 0 - 5.
//output whether or not the person is correct

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int maxValue = 5;
    srand(time(NULL));
    int randomNumber = rand() % maxValue + 1;

    printf("%d\n", randomNumber);
    
    printf("Guess a number 0 - %d: ");
    int guess;
    scanf("%d", &guess);
    
    printf("You guessed %d\n", guess);
    printf("The correct answer was %d\n", randomNumber);
    
    if(guess == randomNumber)
    {
        printf("You win!");
    }
    else
    {
        printf("Dumbass, you did not win. Try again!\n");
        return 0;
    }
    
    printf("Thank you for playing!\n");

}
