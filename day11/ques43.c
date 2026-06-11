//  Write a program to Write function to check prime.
#include <stdio.h>

void prime(int);

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    prime(n);

    return 0;
}

void prime(int n)
{
    if (n <= 1)
    {
        printf("number is not prime.");
        return;

    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            printf("number is not prime.");
            return;
        }
    }

    printf("number is prime.");
}