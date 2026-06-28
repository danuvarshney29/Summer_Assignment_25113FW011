// Write a program to Create student record management system.
#include <stdio.h>

int main()
{
    int roll, marks;
    char name[50];

    printf("Student Record Management System\n");

    printf("\nEnter student name: ");
    scanf("%s", name);

    printf("Enter roll number: ");
    scanf("%d", &roll);

    printf("Enter marks out of 100 : ");
    scanf("%d", &marks);

    printf("\n--- Student Record ---");
    printf("\nName: %s", name);
    printf("\nRoll Number: %d", roll);
    printf("\nMarks: %d", marks);

    if (marks >= 40)
    {
        printf("\nResult: Pass");
    }
    else
    {
        printf("\nResult: Fail");
    }

    return 0;
}