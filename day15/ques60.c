#include <stdio.h>

int main()
{
    int array[100], number, i, current_position=0;

    printf("Enter the number of elements in array: ");
    scanf("%d", &number);

    printf("Enter the elements of array: ");

    for(i = 0; i < number; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("The array is\n");

    for(i = 0; i < number; i++)
    {
        printf("%d\t", array[i]);
    }

    current_position = 0;

    for(i = 0; i < number; i++)
    {
        if(array[i] != 0)
        {
            array[current_position] = array[i];
            current_position++;
        }
    }

    while(current_position < number)
    {
        array[current_position] = 0;
        current_position++;
    }

    printf("\nArray after moving zeroes to end:\n");

    for(i = 0; i < number; i++)
    {
        printf("%d\t ", array[i]);
    }

    return 0;
}