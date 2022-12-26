/*

Write a program which accepts string from the user and check whether the brackets are valid or not.

Input : ({[]})(<>)[]
Output : TRUE

Input : ({[})(<})
Output : FALSE

*/


#include<stdio.h>
#include<malloc.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

#define MAX 20

struct node 
{
    int iData;
    struct node *pNext;
};

int countNodes(struct node *pHead)
{
    int iCount = 0;

    while(pHead != NULL)
    {
        iCount++;
        pHead = pHead->pNext;
    }
    return iCount;
}

BOOL isFull(struct node *pHead)
{
    if(MAX == countNodes(pHead))
        return TRUE;
    return FALSE;
}

BOOL isEmpty(struct node *pHead)
{
    if(pHead == NULL)
        return TRUE;
    return FALSE;
}

void display(struct node *pHead)
{
    if(isEmpty(pHead))
    {
        printf("Stack is empty.\n");
        return;
    }

    printf("Data from the stack : \n");

    while(pHead != NULL)
    {
        printf("|%d|->", pHead->iData);
        pHead = pHead->pNext;
    }
    printf("NULL\n");
}

void push(struct node **ppHead, int iNo)
{
    struct node *pNewNode = NULL;

    if(isFull(*ppHead))
    {
        printf("Stack Overflow.\n");
        return;
    }

    pNewNode = (struct node *)malloc(sizeof(struct node));

    pNewNode->iData = iNo;

    pNewNode->pNext = *ppHead;
    *ppHead = pNewNode;
}

int pop(struct node **ppHead)
{
    int iDelData = 0;
    struct node *pTemp = NULL;

    if(isEmpty(*ppHead))
    {
        printf("Stack is empty.\n");
        return -1;
    }
    
    iDelData = (*ppHead)->iData;

    pTemp = *ppHead;
    *ppHead = (*ppHead)->pNext;
    pTemp->pNext = NULL;
    free(pTemp);
    pTemp = NULL;

    return iDelData;
}

BOOL bracketValidation(struct node **ppHead, char *str)
{
    int i = 0;
    BOOL bFlag = FALSE;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] != ' ' && str[i] != '\t')
        {   
            if(str[i] == '(' || str[i] == '[' || str[i] == '{' || str[i] == '<')
                push(ppHead, str[i]);
              
            else if((*ppHead)->iData == '(' && str[i] == ')' || 
                    (*ppHead)->iData == '[' && str[i] == ']' ||
                    (*ppHead)->iData == '{' && str[i] == '}' ||
                    (*ppHead)->iData == '<' && str[i] == '>')
            {
                pop(ppHead);
                bFlag = TRUE;
            }
            else
            {
                bFlag = FALSE;
                break;
            }
        }
    }
    return bFlag;
}

int main(void)
{
    char chArr[MAX];
    BOOL bRet = FALSE;
    struct node *pStack = NULL;

    printf("Enter the string : \n");
    gets(chArr);

    bRet = bracketValidation(&pStack ,chArr);

    if(bRet == TRUE)
        printf("Brackets are valid\n");

    else
        printf("Brackets are not valid\n");

    return 0;
}