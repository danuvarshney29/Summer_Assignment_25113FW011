// Write a program to Create Inventory Management System

#include <stdio.h>
#include <string.h>

struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main()
{
    struct Product product[100];

    int choice;
    int count = 0;
    int searchId;


    while(1)
    {
        printf("\n===== Inventory Management System =====\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Search Product\n");
        printf("4. Update Quantity\n");
        printf("5. Exit\n");


        printf("Enter your choice: ");
        scanf("%d", &choice);



        switch(choice)
        {

            case 1:

                printf("Enter Product ID: ");
                scanf("%d", &product[count].id);


                printf("Enter Product Name: ");
                scanf("%s", product[count].name);


                printf("Enter Quantity: ");
                scanf("%d", &product[count].quantity);


                printf("Enter Price: ");
                scanf("%f", &product[count].price);


                count++;

                printf("Product Added Successfully!\n");

                break;




            case 2:

                printf("\n--- Product List ---\n");

                for(int i = 0; i < count; i++)
                {
                    printf("\nProduct ID: %d", product[i].id);
                    printf("\nName: %s", product[i].name);
                    printf("\nQuantity: %d", product[i].quantity);
                    printf("\nPrice: %.2f\n", product[i].price);
                }

                break;




            case 3:

                printf("Enter Product ID to search: ");
                scanf("%d", &searchId);


                for(int i = 0; i < count; i++)
                {
                    if(product[i].id == searchId)
                    {
                        printf("\nProduct Found!");
                        printf("\nName: %s", product[i].name);
                        printf("\nQuantity: %d", product[i].quantity);
                        printf("\nPrice: %.2f\n", product[i].price);
                    }
                }

                break;




            case 4:

                printf("Enter Product ID to update quantity: ");
                scanf("%d", &searchId);


                for(int i = 0; i < count; i++)
                {
                    if(product[i].id == searchId)
                    {
                        printf("Enter new quantity: ");
                        scanf("%d", &product[i].quantity);

                        printf("Quantity Updated Successfully!\n");
                    }
                }

                break;




            case 5:

                printf("Exiting Inventory System...");
                return 0;




            default:

                printf("Invalid Choice!");

        }
    }


    return 0;
}