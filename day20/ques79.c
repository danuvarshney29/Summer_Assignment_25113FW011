// Write a program to Find row-wise sum.
#include <stdio.h>
int main()
{
    int mat[10][10];
    int r, c, sum;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);

    printf("Enter elements of matrix:\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Row-wise sum of matrix:\n");
    for (int i = 0; i < r; i++)
    {
        sum = 0;

        for (int j = 0; j < c; j++)
        {
            sum = sum + mat[i][j];
        }

        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}