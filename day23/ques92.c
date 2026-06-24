// Write a program to Find maximum occurring character.

#include <stdio.h>

int main()
{
    char str[100];
    int frequency[256] = {0};
    int max = 0;
    char maxChar;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
 
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != '\n')
        {
            frequency[(unsigned char)str[i]]++;
        }
    } 
    for (int i = 0; i < 256; i++)
    {
        if (frequency[i] > max)
        {
            max = frequency[i];
            maxChar = i;
        }
    }

    printf("Maximum occurring character is: %c\n", maxChar);
    printf("Frequency = %d", max);

    return 0;
}