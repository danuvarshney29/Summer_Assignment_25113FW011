//Write a program to Convert lowercase to uppercase. 
#include <stdio.h>

int main()
{
    char string[100];
    int i;

    printf("Enter a string: ");
    scanf("%s", string);

    for(i = 0; string[i] != '\0'; i++)
    {
        if(string[i] >= 'a' && string[i] <= 'z')
        {
            string[i] = string[i] - 32;
        }
    }

    printf("Uppercase String = %s", string);

    return 0;
}