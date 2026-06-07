#include <stdio.h>

int reverse(int n, int rev);

int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Reverse of the nummber :  %d", reverse(n, 0));

    return 0;
}

int reverse(int n, int rev)
{
    if (n == 0)
        return rev;

    return reverse(n / 10, rev * 10 + n % 10);
}