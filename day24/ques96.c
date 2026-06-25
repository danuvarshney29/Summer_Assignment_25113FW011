// Write a program to Remove duplicate characters.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], result[100];
    int i, j = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i = 0; i < strlen(str); i++)
    {
        int found = 0;

        for (int k = 0; k < j; k++)
        {
            if (str[i] == result[k])
            {
                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            result[j] = str[i];
            j++;
        }
    }

    result[j] = '\0';

    printf("String after removing duplicates: %s", result);

    return 0;
}