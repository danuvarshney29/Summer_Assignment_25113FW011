// Write a program to Check anagram strings.
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int freq1[256] = {0}, freq2[256] = {0};
    int flag = 1;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Count characters of first string
    for (int i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] != '\n')
            freq1[(unsigned char)str1[i]]++;
    }
 
    for (int i = 0; str2[i] != '\0'; i++)
    {
        if (str2[i] != '\n')
            freq2[(unsigned char)str2[i]]++;
    } 
    for (int i = 0; i < 256; i++)
    {
        if (freq1[i] != freq2[i])
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
    {
        printf("Strings are anagram");
    }
    else
    {
        printf("Strings are not anagram");
    }

    return 0;
}