// write a program to check wheather a number is prime.
#include <stdio.h>

int main()
{
    int n, prime = 1;

    printf("Enter any number: ");
    scanf("%d", &n);

    if (n <= 1)
        prime = 0;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 0;
            break;
        }
    }

    if (prime)
        printf("Number is prime");
    else
        printf("Number is not prime");

    return 0;
}