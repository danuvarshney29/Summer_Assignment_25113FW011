// write a program to check armstrong number
#include <stdio.h>

int main()
{
    int n, num1, d, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    num1 = n;

    while (n > 0)
    {
        d = n % 10;
        sum = sum + (d * d * d);
        n = n / 10;
    }

    if (sum == num1)
        printf("%d is an Armstrong number.", num1);
    else
        printf("%d is not an Armstrong number.", num1);

    return 0;
}