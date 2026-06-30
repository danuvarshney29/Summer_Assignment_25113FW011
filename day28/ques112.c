// Write a program to Create Contact Management System

#include <stdio.h>
#include <string.h>

struct Contact
{
    char name[50];
    char phone[15];
    char email[50];
};

int main()
{
    struct Contact contact[100];

    int choice;
    int count = 0;
    char search[50];

    while(1)
    {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);


        switch(choice)
        {
            case 1:

                printf("Enter Name: ");
                scanf("%s", contact[count].name);

                printf("Enter Phone Number: ");
                scanf("%s", contact[count].phone);

                printf("Enter Email: ");
                scanf("%s", contact[count].email);

                count++;

                printf("Contact Added Successfully!\n");

                break;



            case 2:

                printf("\n--- Contact List ---\n");

                for(int i = 0; i < count; i++)
                {
                    printf("\nName: %s", contact[i].name);
                    printf("\nPhone: %s", contact[i].phone);
                    printf("\nEmail: %s\n", contact[i].email);
                }

                break;



            case 3:

                printf("Enter name to search: ");
                scanf("%s", search);


                for(int i = 0; i < count; i++)
                {
                    if(strcmp(contact[i].name, search) == 0)
                    {
                        printf("\nContact Found!");
                        printf("\nName: %s", contact[i].name);
                        printf("\nPhone: %s", contact[i].phone);
                        printf("\nEmail: %s\n", contact[i].email);
                    }
                }

                break;



            case 4:

                printf("Exiting Contact System...");
                return 0;



            default:

                printf("Invalid Choice!");
        }
    }

    return 0;
}