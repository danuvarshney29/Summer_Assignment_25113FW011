// Write a program to Create Ticket Booking System
#include <stdio.h>

struct Ticket
{
    int ticket_no;
    char name[50];
    int age;
    int seat_no;
};

int main()
{
    struct Ticket t[100];
    int choice;
    int count = 0;
    int seats = 50;

    while(1)
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. Show Available Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Display Bookings\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);


        switch(choice)
        {
            case 1:
                printf("Available Seats: %d\n", seats);
                break;


            case 2:

                if(seats > 0)
                {
                    printf("Enter Ticket Number: ");
                    scanf("%d", &t[count].ticket_no);

                    printf("Enter Name: ");
                    scanf("%s", t[count].name);

                    printf("Enter Age: ");
                    scanf("%d", &t[count].age);

                    t[count].seat_no = 50 - seats + 1;

                    seats--;
                    count++;

                    printf("Ticket Booked Successfully!\n");
                    printf("Your Seat Number: %d\n", t[count-1].seat_no);
                }
                else
                {
                    printf("No seats available!\n");
                }

                break;


            case 3:

                printf("\n--- Booking Details ---\n");

                for(int i = 0; i < count; i++)
                {
                    printf("\nTicket Number: %d", t[i].ticket_no);
                    printf("\nName: %s", t[i].name);
                    printf("\nAge: %d", t[i].age);
                    printf("\nSeat Number: %d\n", t[i].seat_no);
                }

                break;


            case 4:
                printf("Exiting Ticket System...");
                return 0;


            default:
                printf("Invalid Choice!");
        }
    }

    return 0;
}