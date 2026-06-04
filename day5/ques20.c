//  Write a program to Find largest prime factor.
#include <stdio.h>

int main()
{
    int n, largestnumber = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0)
        {
            largestnumber = i;
            n = n / i;
        }
    }

    printf("The largest prime factor is %d\n", largestnumber);

    return 0;
}