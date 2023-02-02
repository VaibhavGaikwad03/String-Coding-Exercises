/*

Write a program which accepts string from the user and count the words in that string.

Input : India is my country.
Output : 4

*/

#include <stdio.h>

int CountWords(const char *str)
{
    int iCount = 1;

    while (*str != '\0')
    {
        if (*str == ' ')
            iCount++;
        str++;
    }
    return iCount;
}

int main(void)
{
    char str[50];
    int iRet = 0;

    puts("Enter the string : ");
    gets(str);

    iRet = CountWords(str);

    printf("Count of the words in input string is : %d\n", iRet);

    return 0;
}