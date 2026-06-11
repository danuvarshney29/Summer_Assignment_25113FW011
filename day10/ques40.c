// Write a program to Print character pyramid.
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
#include <stdio.h>

int main()
{
    int n = 5;

    for (int i = 1; i <= n; i++)
    {

        for (int space = 0; space < n - i; space++)
        {
            printf(" ");
        }

        for (int j = 0; j < i; j++)
        {
            printf("%c", 'A' + j);
        }

        for (int j = i - 2; j >= 0; j--)
        {
            printf("%c", 'A' + j);
        }

        printf("\n");
    }

    return 0;
}