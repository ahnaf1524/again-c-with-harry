#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void displayResult(int player, int computer)
{
    const char *choices[] = {"Snake", "Water", "Gun"};
    printf("\nYou chose: %s\n", choices[player]);
    printf("Computer chose: %s\n", choices[computer]);

    if (player == computer)
    {
        printf("\n\033[1;33mIt's a Draw!\033[0m\n");
    }
    else if ((player == 0 && computer == 1) ||
             (player == 1 && computer == 2) ||
             (player == 2 && computer == 0))
    {
        printf("\n\033[1;32mCongratulations! You Win!\033[0m\n");
    }
    else
    {
        printf("\n\033[1;31mYou Lose! Better luck next time!\033[0m\n");
    }
}

int main()
{
    srand(time(NULL));
    int player, computer = rand() % 3;

    printf("\n\033[1;36mWelcome to the Snake-Water-Gun Game!\033[0m\n");
    printf("\033[1;34m-----------------------------------\033[0m\n");
    printf("Choose an option:\n");
    printf("\033[1;32m0: Snake\033[0m\n");
    printf("\033[1;34m1: Water\033[0m\n");
    printf("\033[1;35m2: Gun\033[0m\n");

    printf("\nEnter your choice: ");
    scanf("%d", &player);

    if (player < 0 || player > 2)
    {
        printf("\n\033[1;31mInvalid choice! Please run the game again and choose 0, 1, or 2.\033[0m\n");
        return 1;
    }

    displayResult(player, computer);

    printf("\n\033[1;36mThank you for playing!\033[0m\n");
    return 0;
}
