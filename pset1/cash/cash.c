#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // prompt user until I get a valid response.
    float userInput;
    do
    {
        userInput = get_float("How much do I owe you?");
    }
    while (userInput < 0);
    int cents = round(userInput * 100);
    int coinCounter = 0;
    while (cents > 24)
    {
        cents -= 25;
        coinCounter += 1;
    }
    while (cents > 9)
    {
        cents -= 10;
        coinCounter += 1;
    }
    while (cents > 4)
    {
        cents -= 5;
        coinCounter += 1;
    }
    coinCounter += cents;
    printf("%i\n", coinCounter);
}