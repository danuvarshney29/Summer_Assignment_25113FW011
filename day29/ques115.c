// Write a program to Create Menu-Driven String Operations System
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], rev[100];
    int choice, len;


    while(1)
    {
        printf("\n===== String Operations System =====\n");
        printf("1. Find String Length\n");
        printf("2. Copy String\n");
        printf("3. Compare Strings\n");
        printf("4. Reverse String\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);


        switch(choice)
        {

            case 1:

                printf("Enter a string: ");
                scanf("%s", str1);

                len = strlen(str1);

                printf("Length of string = %d\n", len);

                break;



            case 2:

                printf("Enter a string: ");
                scanf("%s", str1);

                strcpy(str2, str1);

                printf("Copied string = %s\n", str2);

                break;



            case 3:

                printf("Enter first string: ");
                scanf("%s", str1);

                printf("Enter second string: ");
                scanf("%s", str2);


                if(strcmp(str1, str2) == 0)
                {
                    printf("Strings are equal\n");
                }
                else
                {
                    printf("Strings are not equal\n");
                }

                break;



            case 4:

                printf("Enter a string: ");
                scanf("%s", str1);

                strcpy(rev, str1);

                strrev(rev);

                printf("Reverse string = %s\n", rev);

                break;



            case 5:

                printf("Exiting String System...");
                return 0;



            default:

                printf("Invalid Choice!");
        }
    }


    return 0;
}