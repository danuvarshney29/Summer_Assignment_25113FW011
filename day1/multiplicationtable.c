#include <stdio.h>
int main()
{
    int n, table = 1;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("multiplication  table of number:\n");
    for (int i = 1; i <= 10; i++)
    {
        table = n * i;
        printf("%d * %d = %d\n", n, i, table);
    }
    return 0;
}