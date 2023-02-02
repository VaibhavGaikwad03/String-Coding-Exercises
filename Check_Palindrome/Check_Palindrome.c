/*

Write a program which accepts a string from the user and check whether the string is pallindrome or not.

Input : Nitin
Output : True

Input : Programming
Output : False

*/

#include <stdio.h>
#include <stdbool.h>
#include "stringlib.h"

bool CheckPalindrome(const char *str)
{
    char temp[20];

    str_cpy(temp, str);

    str_rev(temp);

    if (str_cmpi(temp, str) == 0)
        return true;
    return false;
}

int main(void)
{
    char str[20];
    bool bRet = false;

    puts("Enter the string : ");
    gets(str);

    bRet = CheckPalindrome(str);

    if (bRet == true)
        puts("String is palindrome");
    else
        puts("String is not palindrome");

    return 0;
}