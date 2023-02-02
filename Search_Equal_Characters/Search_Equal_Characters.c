/*

Write a program which accepts two strings from the user and determine how many times the corresponding positions in two strings hold exactly the same characters.

Input1 : choice
Input2 : chance

Output : 4

*/ 

#include <stdio.h>
#include "stringlib.h"

int SearchEqualCharacters(char *str1, char *str2)
{
    int iCounter = 0;

    if (str_len(str1) != str_len(str2))
        return -1;
    while (*str1 != '\0')
    {
        if (*str1 == *str2)
            iCounter++;
        str1++;
        str2++;
    }
    return iCounter;
}

int main(void)
{
    char str1[20] = {0};
    char str2[20] = {0};
    int iRet = 0;

    puts("Enter first string : ");
    gets(str1);

    puts("Enter second string : ");
    gets(str2);

    iRet = SearchEqualCharacters(str1, str2);

    if (iRet >= 0)
        printf("Corresponding position hold same characters %d times\n", iRet);
    else
        puts("The entered strings are of different length");
}
