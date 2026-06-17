// Write a program to Intersection of arrays.
#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], intersection[100];
    int n1, n2, k = 0;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array: ");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array: ");
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                int found = 0;

                for (int l = 0; l < k; l++)
                {
                    if (intersection[l] == arr1[i])
                    {
                        found = 1;
                        break;
                    }
                }

                if (found == 0)
                {
                    intersection[k] = arr1[i];
                    k++;
                }

                break;
            }
        }
    }

    printf("Intersection of arrays is: ");

    for (int i = 0; i < k; i++)
    {
        printf("%d ", intersection[i]);
    }

    return 0;
}