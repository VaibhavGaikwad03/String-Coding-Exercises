/*
Write a program which accepts  string from the user and accept one character. Check whether that character is present in string or not

Input : "Marvellous Multi OS"
Input : e
Output : Character is present in string

Input : "Marvellous Multi OS"
Input : W
Output : Character is not present in string
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckChar(char *str, char cValue)
{
    while(*str != '\0')
    {
        if(*str == cValue)
        {
            break;
        }
        str++;
    }

    if(*str == '\0')
    {
        return FALSE;
    }
    else
    {
        return TRUE;
    }
}

int main()
{
    char cArr[20];
    char ch = '\0';
    BOOL bRet = FALSE;

    printf("Enter the string : \n");
    scanf("%[^'\n']s", cArr);

    printf("Enter the character to check it is present in string or not : \n");
    scanf(" %c",&ch);

    bRet = CheckChar(cArr, ch);

    if(bRet == TRUE)
    {
        printf("'%c' is present in string\n", ch);
    }
    else
    {
        printf("'%c' is not present in string\n", ch);
    }

    return 0;
}