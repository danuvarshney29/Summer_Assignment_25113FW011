// Write a program to Count words in a sentence.  
#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[100];
    int count = 1;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (int i = 0; sentence[i] != '\0'; i++)
    {
        if (sentence[i] == ' ')
        {
            count++;
        }
    }

    printf("Total words = %d", count);

    return 0;
}