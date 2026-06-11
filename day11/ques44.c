// Write a program to Write function to find factorial.

#include <stdio.h>

int fact(int);

int main()
{

    int n;

    printf("enter the number: ");
    scanf("%d", &n);

    printf("the factorial of %d is %d", n, fact(n));

    return 0;
}

int fact(int n)
{

    if (n == 0 || n == 1)
    {
        return 1;
    }

    else
    {
        return n * fact(n - 1);
    }
}