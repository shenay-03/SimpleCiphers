#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

#define length_alphabet 26

int main(int argc, string argv[])
{
    //this checks if the user put the key and only the key
    if(argc != 2)
    {
        printf("Usage: ./substitution key\n");
        return(1);
    }
    //this checks if the user made the key 26 letters long
    if(strlen(argv[1]) != length_alphabet)
    {
        printf("Key must contain 26 characters.");
        return 1;
    }
    
    //checks invalid characters
    string key = argv[1];
    for (int i = 0; i < length_alphabet; i++)
    {
        if (!isalpha(key[i]))
        {
            printf("Key must contain 26 characters.");
            return 1;
        }
    }
    
    //checks for repetition
    string in_key[length_alphabet] = {0};
    char* ptr;
    for (int i = 0; i < length_alphabet; i++)
    {
        ptr = strstr(in_key, &toupper(key[i]);
        if (ptr != NULL)
        {
            printf("Key must contain 26 characters.");
            return 1;
        }
        in_key[i] = toupper(key[i]);
    }
    
    
    
    
    //gets the user's message
    string text = get_string("plaintext: ");
    
   
    
    

}