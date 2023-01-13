/*

Write a program which accepts string from the user and check whether the brackets are valid or not.

Input : ({[]})(<>)[]
Output : TRUE

Input : ({[})(<})
Output : FALSE

*/

#include"custom_header.h"

BOOL checkBalancedBrackets(char chValue1, char chValue2)
{
    if(chValue1 == '(' && chValue2 == ')' || chValue1 == '[' && chValue2 == ']' || chValue1 == '{' && chValue2 == '}' || chValue1 == '<' && chValue2 == '>')
        return TRUE;
    else
        return FALSE;
}

BOOL bracketValidation(struct node **ppHead, char *chStr)
{
    while(*chStr != '\0')
    {
        if(*chStr == '(' || *chStr == '[' || *chStr == '{' || *chStr == '<')
            push(ppHead, *chStr);

        if(*chStr == ')' || *chStr == ']' || *chStr == '}' || *chStr == '>')
        {
            if(*ppHead == NULL)
                return FALSE;
            if(!checkBalancedBrackets(pop(ppHead), *chStr))
                return FALSE;
        }
        chStr++;
    }
    if(*ppHead == NULL)
        return TRUE;
    else
        return FALSE;
}

int main(void)
{
    char chArr[MAX];
    BOOL bRet = FALSE;
    struct node *pStack = NULL;

    printf("Enter the string : \n");
    scanf("%[^\n]s", chArr);

    bRet = bracketValidation(&pStack ,chArr);

    if(bRet == TRUE)
        printf("\nBrackets are valid\n");

    else
        printf("\nBrackets are not valid\n");

    return 0;
}