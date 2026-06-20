// Write a program to Check symmetric matrix.
#include <stdio.h>
int main()
{
    int mat[10][10];
    int r, c, flag = 1;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &r, &c);
 
    if (r != c)
    {
        printf("Matrix is not symmetric");
        return 0;
    }

    printf("Enter elements of matrix:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (mat[i][j] != mat[j][i])
            {
                flag = 0;
                break;
            }
        }
    }

    if (flag == 1)
    {
        printf("Matrix is symmetric");
    }
    else
    {
        printf("Matrix is not symmetric");
    }

    return 0;
}