// write a program to check whether a number is palindrome .

#include <stdio.h>

int main()
{
    int n, i, d, sum = 0;

    printf("enter the number :");
    scanf("%d", &n);

    i = n;

    while (n > 0)
    {
        d = n % 10;

        sum = (sum * 10) + d;

        n = n / 10;
    }

    if (i == sum)
    {
        printf("number is palindrome ");
    }
    else
    {
        printf("number is not palindrome ");
    }

    return 0;
}