//  Write a program to Find pair with given sum.  
#include <stdio.h>

int main()
{
    int arr[100], n, sum;
    int found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements of array: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter given sum: ");
    scanf("%d", &sum);

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                printf("Pair found: %d and %d\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if (found == 0)
    {
        printf("No pair found");
    }

    return 0;
}