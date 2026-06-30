// Write a program to Develop complete mini project using arrays, strings and functions

#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};


struct Student student[100];
int count = 0;


// Function to add student
void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d", &student[count].roll);

    printf("Enter Name: ");
    scanf("%s", student[count].name);

    printf("Enter Marks: ");
    scanf("%f", &student[count].marks);

    count++;

    printf("Student Added Successfully!\n");
}



// Function to display students
void displayStudent()
{
    printf("\n--- Student Records ---\n");

    for(int i = 0; i < count; i++)
    {
        printf("\nRoll Number: %d", student[i].roll);
        printf("\nName: %s", student[i].name);
        printf("\nMarks: %.2f\n", student[i].marks);
    }
}



// Function to search student
void searchStudent()
{
    int roll;
    int found = 0;

    printf("\nEnter Roll Number to search: ");
    scanf("%d", &roll);


    for(int i = 0; i < count; i++)
    {
        if(student[i].roll == roll)
        {
            printf("\nStudent Found!");
            printf("\nName: %s", student[i].name);
            printf("\nMarks: %.2f\n", student[i].marks);

            found = 1;
        }
    }


    if(found == 0)
    {
        printf("Student not found!\n");
    }
}



// Function to calculate average marks
void averageMarks()
{
    float sum = 0, avg;


    for(int i = 0; i < count; i++)
    {
        sum = sum + student[i].marks;
    }


    avg = sum / count;


    printf("Average Marks = %.2f\n", avg);
}




int main()
{
    int choice;


    while(1)
    {
        printf("\n===== Mini Student Management Project =====\n");

        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Calculate Average Marks\n");
        printf("5. Exit\n");


        printf("Enter your choice: ");
        scanf("%d", &choice);



        switch(choice)
        {

            case 1:
                addStudent();
                break;


            case 2:
                displayStudent();
                break;


            case 3:
                searchStudent();
                break;


            case 4:
                averageMarks();
                break;


            case 5:
                printf("Exiting Project...");
                return 0;


            default:
                printf("Invalid Choice!");
        }
    }


    return 0;
}