/*
Write a program which accepts  string from the user and copy the contents of that string into another string. 

Input : "Marvellous Multi OS"

Output : "Marvellous Multi OS"

*/

#include<stdio.h>

void StrCpyX(char *src, char *dest)
{
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
    char cValue[20];
    char CpyStr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s",cValue);

    StrCpyX(cValue, CpyStr);

    printf("Copied string is : %s",CpyStr);
    return 0;
}