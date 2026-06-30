// Write a program to Create Library Management System
#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char name[50];
    char author[50];
    int issued;
};

int main()
{
    struct Book books[100];
    int choice, count = 0;
    int searchId;

    while (1)
    {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Book ID: ");
                scanf("%d", &books[count].id);

                printf("Enter Book Name: ");
                scanf("%s", books[count].name);

                printf("Enter Author Name: ");
                scanf("%s", books[count].author);

                books[count].issued = 0;

                count++;

                printf("Book Added Successfully!\n");
                break;


            case 2:
                printf("\n--- Book List ---\n");

                for(int i = 0; i < count; i++)
                {
                    printf("\nBook ID: %d", books[i].id);
                    printf("\nBook Name: %s", books[i].name);
                    printf("\nAuthor: %s", books[i].author);

                    if(books[i].issued == 1)
                        printf("\nStatus: Issued\n");
                    else
                        printf("\nStatus: Available\n");
                }

                break;


            case 3:
                printf("Enter Book ID to search: ");
                scanf("%d", &searchId);

                for(int i = 0; i < count; i++)
                {
                    if(books[i].id == searchId)
                    {
                        printf("\nBook Found!");
                        printf("\nName: %s", books[i].name);
                        printf("\nAuthor: %s\n", books[i].author);
                    }
                }

                break;


            case 4:
                printf("Enter Book ID to issue: ");
                scanf("%d", &searchId);

                for(int i = 0; i < count; i++)
                {
                    if(books[i].id == searchId)
                    {
                        if(books[i].issued == 0)
                        {
                            books[i].issued = 1;
                            printf("Book Issued Successfully!\n");
                        }
                        else
                        {
                            printf("Book already issued!\n");
                        }
                    }
                }

                break;


            case 5:
                printf("Exiting Library System...");
                return 0;


            default:
                printf("Invalid Choice!");
        }
    }

    return 0;
}