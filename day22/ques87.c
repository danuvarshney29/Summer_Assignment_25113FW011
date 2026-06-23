// Write a program to Character frequency.
#include <stdio.h>
#include <string.h>
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

    printf("Character frequency:\n");

    for (int i = 0; i < 256; i++)
    {
        if (frequency[i] > 0 && i != '\n')
        {
            printf("%c = %d\n", i, frequency[i]);
        }
    }

    return 0;
}