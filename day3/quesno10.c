// write a program to  print prime numbers in a range.

#include <stdio.h>

int main()
{
    int num1, num2, prime;

    printf("Enter starting number: ");
    scanf("%d", &num1);

    printf("Enter ending number: ");
    scanf("%d", &num2);

    for (int n = num1; n <= num2; n++)
    {
        if (n <= 1)
            continue;

        prime = 1;

        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                prime = 0;
                break;
            }
        }

        if (prime)
            printf("%d ", n);
    }

    return 0;
}