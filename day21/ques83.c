// Write a program to Count vowels and consonants.  
#include <stdio.h>

int main()
{
    char string[100];
    int i, vowels = 0, consonants = 0;

    printf("Enter a string: ");
    scanf("%s", string);

    for(i = 0; string[i] != '\0'; i++)
    {
        if((string[i] >= 'A' && string[i] <= 'Z') ||
           (string[i] >= 'a' && string[i] <= 'z'))
        {
            if(string[i] == 'A' || string[i] == 'E' ||
               string[i] == 'I' || string[i] == 'O' ||
               string[i] == 'U' || string[i] == 'a' ||
               string[i] == 'e' || string[i] == 'i' ||
               string[i] == 'o' || string[i] == 'u')
            {
                vowels++;
            }
            else
            {
                consonants++;
            }
        }
    }

    printf("Vowels = %d\n", vowels);
    printf("Consonants = %d", consonants);

    return 0;
}