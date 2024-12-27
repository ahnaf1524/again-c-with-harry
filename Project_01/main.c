#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    srand(time(0));
    int randomNumber = rand() % 100 + 1; // Random number between 1 and 100
    int guess;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I have chosen a number between 1 and 100. Can you guess it?\n");
    printf("You have 5 attempts to guess the correct number. Good luck!\n\n");

    for (int attempts = 5; attempts > 0; --attempts)
    {
        printf("You have %d attempt(s) left. Enter your guess: ", attempts);
        scanf("%d", &guess);

        if (guess == randomNumber)
        {
            printf("Congratulations! You guessed the correct number: %d\n", randomNumber);
            return 0;
        }
        else if (guess > randomNumber)
        {
            printf("Too high! Try guessing a smaller number.\n\n");
        }
        else
        {
            printf("Too low! Try guessing a larger number.\n\n");
        }
    }

    printf("Sorry, you've used all your attempts. The correct number was: %d\n", randomNumber);
    printf("Better luck next time!\n");

    return 0;
}
