// Write a program to Create marksheet generation system.
#include <stdio.h>
int main()
{
    char name[50];
    int roll;
    int sub1, sub2, sub3;
    int total;
    float percentage;

    printf("Marksheet Generation System\n");

    printf("\nEnter student name: ");
    scanf("%s", name);

    printf("Enter roll number: ");
    scanf("%d", &roll);

    printf("Enter marks of Subject 1: ");
    scanf("%d", &sub1);

    printf("Enter marks of Subject 2: ");
    scanf("%d", &sub2);

    printf("Enter marks of Subject 3: ");
    scanf("%d", &sub3);


    total = sub1 + sub2 + sub3;
    percentage = total / 3.0;


    printf("\n------ Marksheet ------");
    printf("\nName: %s", name);
    printf("\nRoll Number: %d", roll);

    printf("\nSubject 1 Marks: %d", sub1);
    printf("\nSubject 2 Marks: %d", sub2);
    printf("\nSubject 3 Marks: %d", sub3);

    printf("\nTotal Marks: %d", total);
    printf("\nPercentage: %.2f%%", percentage);


    if (percentage >= 40)
    {
        printf("\nResult: Pass");
    }
    else
    {
        printf("\nResult: Fail");
    }


    return 0;
}