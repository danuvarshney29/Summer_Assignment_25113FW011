//   Write a program to Find missing number in array.
#include <stdio.h>

int main()
{
    int arr[100], n;
    int sum = 0, expectedSum, missing;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    printf("Enter elements of array: ");

    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    expectedSum = n * (n + 1) / 2;


    missing = expectedSum - sum;

    printf("Missing number is: %d", missing);

    return 0;
}