#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckAlpha(char ch)
{
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
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

    bRet = CheckAlpha(cValue);

    if(bRet == TRUE)
    {
        printf("It is an Alphabet\n");
    }
    else
    {
        printf("It is not an Alphabet\n");
    }

    return 0;
}