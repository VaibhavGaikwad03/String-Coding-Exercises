/*
Write a program which accepts  string from the user and check whether it contains vowels in it or not

Input : "Marvellous"
Output : It contains vowels

Input : xyz
Output : It does not contains vowels
*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckVowel(char *str)
{
    while(*str != '\0')
    {
        if((*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U') || (*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
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
    BOOL bRet = FALSE;

    printf("Enter the string : \n");
    scanf("%[^\n]s", cArr);

    bRet = CheckVowel(cArr);

    if(bRet == TRUE)
    {
        printf("It contains vowels\n");
    }
    else
    {
        printf("It does not contains vowels\n");
    }

    return 0;
}