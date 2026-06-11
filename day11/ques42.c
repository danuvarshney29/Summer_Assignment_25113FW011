// Write a program to Write function to find maximum.

#include <stdio.h>
void max(int, int);

int main()
{
    int a, b;
    printf("enter 1st number : ");
    scanf("%d", &a);

    printf("enter 2nd number : ");
    scanf("%d", &b);

    max(a, b);

    return 0;
}

void max(int a, int b)
{

    if (a >= b)
    {
        printf("%d is maximum ", a);
    }

    else
    {

        printf("%d is maximum ", b);
    }
}