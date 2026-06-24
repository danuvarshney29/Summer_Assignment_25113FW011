//  Write a program to Find first non-repeating character.  
#include <stdio.h>

int main()
{
    char str[100];
    int frequency[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
 
    for (int i = 0; str[i] != '\0'; i++)
    {
        frequency[(unsigned char)str[i]]++;
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (frequency[(unsigned char)str[i]] == 1)
        {
            printf("First non-repeating character is: %c", str[i]);
            return 0;
        }
    }

    printf("No non-repeating character found");

    return 0;
}