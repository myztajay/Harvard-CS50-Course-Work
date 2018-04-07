#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    string userInput;
    string key = argv[1];
    int i = atoi(key);
    do
    {
        userInput = get_string("what do you want to encrypt?");
    }
    while(userInput < 0);
    for (int i = 0, n = strlen(userInput); i < n; i++)
{
    printf("%c", userInput[i]);
}
    return 0
}