// write a program to calculate sum of first N natural numbers.

#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("enter the natural number : ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        sum = sum + i;
    }

    printf("the sum is %d", sum);
    return 0;
}