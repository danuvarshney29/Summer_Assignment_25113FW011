// Write a program to Create Bank Account System

#include <stdio.h>
#include <string.h>

struct Account
{
    int acc_no;
    char name[50];
    float balance;
};

int main()
{
    struct Account account;
    int choice;
    float amount;

    while(1)
    {
        printf("\n===== Bank Account System =====\n");
        printf("1. Create Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Display Account Details\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);


        switch(choice)
        {
            case 1:
                printf("Enter Account Number: ");
                scanf("%d", &account.acc_no);

                printf("Enter Account Holder Name: ");
                scanf("%s", account.name);

                printf("Enter Initial Balance: ");
                scanf("%f", &account.balance);

                printf("Account Created Successfully!\n");
                break;


            case 2:
                printf("Enter amount to deposit: ");
                scanf("%f", &amount);

                account.balance = account.balance + amount;

                printf("Money Deposited Successfully!\n");
                break;


            case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);

                if(amount <= account.balance)
                {
                    account.balance = account.balance - amount;
                    printf("Withdrawal Successful!\n");
                }
                else
                {
                    printf("Insufficient Balance!\n");
                }

                break;


            case 4:
                printf("Current Balance: %.2f\n", account.balance);
                break;


            case 5:
                printf("\nAccount Details\n");
                printf("Account Number: %d\n", account.acc_no);
                printf("Account Holder: %s\n", account.name);
                printf("Balance: %.2f\n", account.balance);
                break;


            case 6:
                printf("Exiting Bank System...");
                return 0;


            default:
                printf("Invalid Choice!");
        }
    }

    return 0;
}