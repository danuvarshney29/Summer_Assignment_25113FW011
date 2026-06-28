// Write a program to Create quiz application. 
#include <stdio.h>

int main()
{
    int answer, score = 0;

    printf("Welcome to Quiz Application\n");

    printf("\n1. Which language is used for system programming?");
    printf("\n1. Python");
    printf("\n2. C");
    printf("\n3. Java");
    printf("\n4. HTML");

    printf("\nEnter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
    {
        score++;
    }

    printf("\n2. What is the size of int in C?");
    printf("\n1. 2 bytes");
    printf("\n2. 4 bytes");
    printf("\n3. 8 bytes");
    printf("\n4. 16 bytes");

    printf("\nEnter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
    {
        score++;
    }
    
    printf("\n3. Which symbol is used for comments in C?");
    printf("\n1. //");
    printf("\n2. #");
    printf("\n3. @");
    printf("\n4. &");

    printf("\nEnter your answer: ");
    scanf("%d", &answer);

    if (answer == 1)
    {
        score++;
    }


    printf("\nQuiz completed!");
    printf("\nYour score is: %d/3", score);

    return 0;
}