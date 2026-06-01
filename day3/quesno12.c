// write a programs  to find LCM of two numbers.
#include <stdio.h>

int main()
{
    int num1, num2, a, b, temp, gcd, lcm;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    a = num1;
    b = num2;

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;

    lcm = (num1 * num2) / gcd;

    printf("LCM = %d", lcm);

    return 0;
}