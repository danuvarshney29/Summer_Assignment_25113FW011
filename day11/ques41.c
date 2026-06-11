// Write a function to find sum of two numbers.

#include <stdio.h>

int sum(int, int);

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    printf("Sum of two numbers is %d", sum(a, b));

    return 0;
}

int sum(int a, int b)
{
    return a + b;
}