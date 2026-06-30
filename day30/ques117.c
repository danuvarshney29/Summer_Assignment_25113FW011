// Write a program to Create Student Record System using Arrays and Strings
#include <stdio.h>
#include <string.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student student[100];

    int choice;
    int count = 0;
    int searchRoll;


    while(1)
    {
        printf("\n===== Student Record System =====\n");
        printf("1. Add Student Record\n");
        printf("2. Display Student Records\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");


        printf("Enter your choice: ");
        scanf("%d", &choice);



        switch(choice)
        {

            case 1:

                printf("Enter Roll Number: ");
                scanf("%d", &student[count].roll);


                printf("Enter Student Name: ");
                scanf("%s", student[count].name);


                printf("Enter Marks: ");
                scanf("%f", &student[count].marks);


                count++;

                printf("Record Added Successfully!\n");

                break;



            case 2:

                printf("\n--- Student Records ---\n");


                for(int i = 0; i < count; i++)
                {
                    printf("\nRoll Number: %d", student[i].roll);
                    printf("\nName: %s", student[i].name);
                    printf("\nMarks: %.2f\n", student[i].marks);
                }

                break;




            case 3:

                printf("Enter Roll Number to search: ");
                scanf("%d", &searchRoll);


                for(int i = 0; i < count; i++)
                {
                    if(student[i].roll == searchRoll)
                    {
                        printf("\nStudent Found!");
                        printf("\nName: %s", student[i].name);
                        printf("\nMarks: %.2f\n", student[i].marks);
                    }
                }

                break;




            case 4:

                printf("Exiting Student System...");
                return 0;



            default:

                printf("Invalid Choice!");

        }
    }


    return 0;
}