/*
Accept character from user. if character is small display its corresponding capital character and if it is small then display its corresponding capital. In other cases display as it is.

Input : Q
Output : q

Input : m
Output : M

Input : 3
Output : 3

Input : % 
Output : %

*/

#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("%c",ch+32);
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        printf("%c",ch-32);
    }
    else
    {
        printf("%c", ch);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : \n");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}