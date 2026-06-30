// Write a program to Create Mini Library System

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
    struct Book book[100];

    int choice;
    int count = 0;
    int searchId;


    while(1)
    {
        printf("\n===== Mini Library System =====\n");
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
                scanf("%d", &book[count].id);


                printf("Enter Book Name: ");
                scanf("%s", book[count].name);


                printf("Enter Author Name: ");
                scanf("%s", book[count].author);


                book[count].issued = 0;

                count++;

                printf("Book Added Successfully!\n");

                break;




            case 2:

                printf("\n--- Book Details ---\n");


                for(int i = 0; i < count; i++)
                {
                    printf("\nBook ID: %d", book[i].id);
                    printf("\nBook Name: %s", book[i].name);
                    printf("\nAuthor: %s", book[i].author);


                    if(book[i].issued == 1)
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
                    if(book[i].id == searchId)
                    {
                        printf("\nBook Found!");
                        printf("\nName: %s", book[i].name);
                        printf("\nAuthor: %s\n", book[i].author);
                    }
                }

                break;




            case 4:

                printf("Enter Book ID to issue: ");
                scanf("%d", &searchId);


                for(int i = 0; i < count; i++)
                {
                    if(book[i].id == searchId)
                    {
                        if(book[i].issued == 0)
                        {
                            book[i].issued = 1;
                            printf("Book Issued Successfully!\n");
                        }
                        else
                        {
                            printf("Book is already issued!\n");
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