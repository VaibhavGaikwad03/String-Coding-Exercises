/*
Accepet character from user and check whether it is Small or not

Input : f
Output : It is a Small Character
Input : A
Output : It is not a Small Character

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckCapital(char ch)
{
    if((ch >= 'a') && (ch <= 'z'))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}


int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;
    printf("Enter the character : \n");
    scanf("%c",&cValue);

    bRet = CheckCapital(cValue);

    if(bRet == TRUE)
    {
        printf("It is a Small Character\n");
    }
    else
    {
        printf("It is not a Small Character\n");
    }

    return 0;
}