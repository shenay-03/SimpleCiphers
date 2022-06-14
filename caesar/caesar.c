#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BUFFER 500

int main(int argc, string argv[])
{
    //checks the condition if there are more or less than 2 command line arguments
    //second one checks if the number is negative
    if (argc != 2 || atoi(argv[1]) < 1)
    {
        printf("Usage: ./caesar key");
        return 1;
    }
    //goes through all the numbers and checks if they are numbers
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key");
            return 1;  
        }
    }
    
    //gets the user's input
    string text = get_string("plaintext: ");
    
    
    char cipher[MAX_BUFFER] = {0};
    char letter;
    int shift = atoi(argv[1]);
    
    //shifts each letter and does the encryption
    for (int i = 0; i < strlen(text); i++)
    {
        letter = text[i];
        if (isalpha(letter))
        {
            if (isupper(letter))
            {
                //this is for upper case letters
                cipher[i] = (((letter - 65) + shift) % 26) + 65;
            }
            else
            {
                //for lower case letters
                cipher[i] = (((letter - 97) + shift) % 26) + 97;
            }
        }
        else 
        {
            //changes the values to match the encrypted values
            cipher[i] = text[i];
        }
    }
    printf("ciphertext: %s\n", cipher);
    return 0;
}