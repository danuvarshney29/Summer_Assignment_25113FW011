#include <stdio.h>
int main()
{
    int array[100],number,i,j;
    printf("Enter the number of elements in array:");
    scanf("%d",&number);
    printf("Enter the elements of array");

    for (i=0;i<number;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("The array is \n");

    for (i=0;i<number;i++)
    {
        printf("%d\t",array[i]);
    }

    j=number;

    for(i = 0; i < number / 2; i++)
    {
        int temp = array[i];
        array[i] = array[number - 1 - i];
        array[number - 1 - i] = temp;

    }
   
    printf("\nThe new array is\n");

    for (i=0;i<number;i++)
    {
        printf("%d\t",array[i]);
    }
    
    return 0;
}