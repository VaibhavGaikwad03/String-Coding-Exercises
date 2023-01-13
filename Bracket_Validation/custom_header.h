#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

#define MAX 20

struct node 
{
    char chData;
    struct node *pNext;
};

int countNodes(struct node *);
BOOL isFull(struct node *);
BOOL isEmpty(struct node *);
void display(struct node *);
void push(struct node **, char);
int pop(struct node **);