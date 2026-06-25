// Write a program to Find longest word.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    char word[50], longest[50];

    printf("Enter a sentence: ");
    gets(str);
 
    int max = 0;

    char *token = strtok(str, " ");

    while (token != NULL)
    {
        if (strlen(token) > max)
        {
            max = strlen(token);
            strcpy(longest, token);
        }

        token = strtok(NULL, " ");
    }

    printf("Longest word is: %s", longest);

    return 0;
}