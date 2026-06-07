//   Write a program to Recursive sum of digits.

#include <stdio.h>

int sum(int n);

int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);

    printf("sum of digit of number is %d", sum(n));

    return 0;
}

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }

    return (n % 10) + sum(n / 10);
}