/*
Write a program which accepts 2 strings from user and concat second string after first string. (Implement strcat() function). 

Input : "Marvellous Infosystems"
Input : "Logic Building"

Output : "Marvellous Infosystems Logic Building"

*/

#include<stdio.h>

void StrCatX(char *dest, char *src)
{
    while(*dest != '\0')
    {
        dest++;
    }
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char cArr[50];
    char cBrr[20];

    printf("Enter the first string : \n");
    scanf("%[^'\n']s", cArr);

    printf("Enter the second string : \n");
    scanf(" %[^'\n']s", cBrr);

    StrCatX(cArr, cBrr);

    printf("Concated string is : %s\n",cArr);

    return 0;
}