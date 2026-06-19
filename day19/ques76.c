// Write a program to Find diagonal sum.
#include <stdio.h>
int main()
{
    int mat[10][10];
    int n, sum = 0;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements of matrix:\n");
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i = 0; i < n; i++)
    {
        sum = sum + mat[i][i];
    }

    printf("Diagonal sum is: %d", sum);

    return 0;
}