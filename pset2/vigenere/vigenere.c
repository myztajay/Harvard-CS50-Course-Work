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

    for (int i = 0; i < strlen(key); i++)
    {
        if (!isalpha(key[i]))
        {
            return 1;
        }
    }

    // this is where I would put a comment since error checking completed and a new portion has started
    string userInput = get_string("plaintext:");
    int letter;
    char encryptedMessage[strlen(userInput) + 1];
    int keyCounter = 0;
    for (int i = 0; i < strlen(userInput); i++)
    {
        if (isupper(userInput[i]))
        {
            letter = (((userInput[i] - 'A' + (toupper(key[(keyCounter % strlen(key))]) - 'A'))) % 26) + 'A';
            keyCounter++;

        }
        else if (islower(userInput[i]))
        {
            letter = (((userInput[i] - 'a' + (tolower(key[(keyCounter % strlen(key))]) - 'a'))) % 26) + 'a';
            keyCounter++;
        }
        else
        {
            letter = userInput[i];
        }
        encryptedMessage[i] = letter;
        encryptedMessage[i + 1] = '\0';
    }
    printf("ciphertext: %s\n", encryptedMessage);
    return 0;
}

//peer review comments
// style50 came back good, but recommended more clarifying comments
// error trapping is effective + error messages are helpful
// in the error message could tell the user you're looking for a string though
// the code for iterating through the message and shifting based on the key text is clean and readable
// most of all it works!