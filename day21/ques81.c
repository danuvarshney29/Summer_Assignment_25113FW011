// Write a program to Find string length without strlen(). 
#include <stdio.h>

int main()
{
    char string[100];
    int i, length = 0;

    printf("Enter a string: ");
    scanf("%s", string);

    for(i = 0; string[i] != '\0'; i++)
    {
        length++;
    }

    printf("Length = %d", length);

    return 0;
}