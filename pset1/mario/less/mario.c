#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int userInput;
    do
    {
        userInput = get_int("please enter a number: ");
    }
    while (userInput > 23 || userInput < 0);
    if (userInput == 0)
    {
        return 0;

    }
    for (int i = 0; i < userInput; i++)
    {
        printf("%*s", userInput - i - 1, "");
        for (int j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("#");
        printf("\n");
    }
}

