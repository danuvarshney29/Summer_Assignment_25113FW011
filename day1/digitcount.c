// write a program to count digit in a number

#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("enter the number : ");
    scanf("%d", &n);

    if (n == 0)
    {
        count = 1;
    }

    while (n > 0)
    {
        n = n / 10;
        count = count + 1;
    }

    printf("digit = %d", count);

    return 0;
}