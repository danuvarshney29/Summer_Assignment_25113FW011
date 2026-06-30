// Write a program to Create Menu-Driven Array Operations System
#include <stdio.h>
int main()
{
    int arr[100];
    int n = 0;
    int choice, sum, max;


    while(1)
    {
        printf("\n===== Array Operations System =====\n");
        printf("1. Insert Elements\n");
        printf("2. Display Array\n");
        printf("3. Find Sum\n");
        printf("4. Find Maximum Element\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);


        switch(choice)
        {

            case 1:

                printf("Enter size of array: ");
                scanf("%d", &n);

                printf("Enter array elements:\n");

                for(int i = 0; i < n; i++)
                {
                    scanf("%d", &arr[i]);
                }

                printf("Array inserted successfully!\n");

                break;



            case 2:

                printf("Array elements are:\n");

                for(int i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }

                printf("\n");

                break;



            case 3:

                sum = 0;

                for(int i = 0; i < n; i++)
                {
                    sum = sum + arr[i];
                }

                printf("Sum of array = %d\n", sum);

                break;



            case 4:

                max = arr[0];

                for(int i = 1; i < n; i++)
                {
                    if(arr[i] > max)
                    {
                        max = arr[i];
                    }
                }

                printf("Maximum element = %d\n", max);

                break;



            case 5:

                printf("Exiting Array System...");
                return 0;



            default:

                printf("Invalid Choice!");
        }
    }


    return 0;
}