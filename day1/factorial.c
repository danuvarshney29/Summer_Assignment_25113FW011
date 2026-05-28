// write a program to find the factorial of a number

#include <stdio.h>

int main()
{
    int n, factorial = 1;

    printf("enter the number :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf("factorial is %d", factorial);

    return 0;
}