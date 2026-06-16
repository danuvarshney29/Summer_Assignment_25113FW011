//   Write a program to Find maximum frequency element.
#include <stdio.h>

int main()
{
    int arr[100], n;
    int maxCount = 0, maxElement = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements of array: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        int count = 1;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count > maxCount)
        {
            maxCount = count;
            maxElement = arr[i];
        }
    }

    printf("Maximum frequency element is: %d", maxElement);
    printf("\nFrequency: %d", maxCount);

    return 0;
}