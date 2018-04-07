#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int userInput = get_int("How many minute did you spend in the shower:");
    int totalOunces = 192 * userInput;
    int bottles = totalOunces/16;
    printf("%i\n", bottles);
}