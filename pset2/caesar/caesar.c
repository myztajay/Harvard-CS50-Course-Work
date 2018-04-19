#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    string key = argv[1];
    // Error Checking
    if (argc > 2)
    {
        printf("too many arguments were passed, expected 1\n");
        return 1;
    }
    else if (argc < 2)
    {
        printf("no arguments provided, expected 1 argument\n");
        return 1;
    }

    string userInput = get_string("plaintext:");
    int letter;
    char encryptedMessage[strlen(userInput)];
    for (int i = 0; i < strlen(userInput); i++)
    {
        if (isupper(userInput[i]))
        {
            letter = (((userInput[i] - 'A' + atoi(key))) % 26) + 'A';
        }
        else if (islower(userInput[i]))
        {
            letter = (((userInput[i] - 'a' + atoi(key))) % 26) + 'a';
        }
        else
        {
            letter = userInput[i];
        }
        encryptedMessage[i] = letter;
    }
    printf("ciphertext: %s\n", encryptedMessage);
    return 0;
}

// peer review comments
// ran style50 and saw no issues, looks great!
// code is clean
// passed check50
// I like where you put the atoi() function with modulo - I had my atoi() separate
// Only sugguestion is to add a few more comments to clarify what each portion of the code does
// code is clean