// write a program to find product of digit
#include <stdio.h>

int main()
{

    int n, d, i = 1;

    printf("enter the number : ");
    scanf("%d", &n);

    while (n > 0)
    {
        d = n % 10;

        i = i * d;

        n = n / 10;
    }

    printf("product of digit is %d", i);

    return 0;
}