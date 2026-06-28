//  Write a program to Create ATM simulation. 
#include <stdio.h>
int main()
{
    int pin, choice;
    float balance = 5000, amount;

    printf("Enter your PIN: ");
    scanf("%d", &pin);

    if (pin == 1234)
    {
        printf("\nATM Menu");
        printf("\n1. Check Balance");
        printf("\n2. Withdraw Money");
        printf("\n3. Deposit Money");
        printf("\n4. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Your balance is: %.2f", balance);
            break;

        case 2:
            printf("Enter amount to withdraw: ");
            scanf("%f", &amount);

            if (amount <= balance)
            {
                balance = balance - amount;
                printf("Please collect your cash.");
                printf("\nRemaining balance: %.2f", balance);
            }
            else
            {
                printf("Insufficient balance.");
            }
            break;

        case 3:
            printf("Enter amount to deposit: ");
            scanf("%f", &amount);

            balance = balance + amount;
            printf("Amount deposited successfully.");
            printf("\nUpdated balance: %.2f", balance);
            break;

        case 4:
            printf("Thank you for using ATM.");
            break;
            
        default:
            printf("Invalid choice.");
        }
    }
    else
    {
        printf("Wrong PIN.");
    }

    return 0;
}