// Write a program to Reverse a string. 
#include <stdio.h>

int main()
{
    char string[100], temp;
    int i, length = 0;

    printf("Enter a string: ");
    scanf("%s", string);

    for(i = 0; string[i] != '\0'; i++)
    {
        length++;
    }

    for(i = 0; i < length / 2; i++)
    {
        temp = string[i];
        string[i] = string[length - 1 - i];
        string[length - 1 - i] = temp;
    }

    printf("Reversed String = %s", string);

    return 0;
}