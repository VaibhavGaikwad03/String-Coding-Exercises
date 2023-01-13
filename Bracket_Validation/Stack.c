#include"custom_header.h"
#include<malloc.h>

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
        printf("|%d|->", pHead->chData);
        pHead = pHead->pNext;
    }
    printf("NULL\n");
}

void push(struct node **ppHead, char chValue)
{
    struct node *pNewNode = NULL;

    if(isFull(*ppHead))
    {
        printf("Stack Overflow.\n");
        return;
    }

    pNewNode = (struct node *)malloc(sizeof(struct node));

    pNewNode->chData = chValue;

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
    
    iDelData = (*ppHead)->chData;

    pTemp = *ppHead;
    *ppHead = (*ppHead)->pNext;
    pTemp->pNext = NULL;
    free(pTemp);
    pTemp = NULL;

    return iDelData;
}