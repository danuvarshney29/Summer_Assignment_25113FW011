// Write a program to Find column-wise sum.

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

    printf("Column-wise sum of matrix:\n");

    for (int i = 0; i < c; i++)
    {
        sum = 0;

        for (int j = 0; j < r; j++)
        {
            sum = sum + mat[j][i];
        }

        printf("Sum of column %d = %d\n", i + 1, sum);
    }

    return 0;
}