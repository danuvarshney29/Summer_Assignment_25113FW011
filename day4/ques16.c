 // write a program to print armstrong numbers in a range 
 #include <stdio.h>

int main()
{
    int start, end;

    printf("Enter starting number: ");
    scanf("%d", &start);

    printf("Enter ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers are:\n");

    for (int n = start; n <= end; n++)
    {
        int num = n, d, sum = 0;

        while (num > 0)
        {
            d = num % 10;
            sum = sum + (d * d * d);
            num = num / 10;
        }

        if (sum == n)
            printf("%d ", n);
    }

    return 0;
}