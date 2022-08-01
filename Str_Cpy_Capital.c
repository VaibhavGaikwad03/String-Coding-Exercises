/*
Write a program which accepts string from the user and copy capital characters of that string into another string

Input : "Marvellous Multi OS"

Output : "MMOS"

*/

#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
    *dest = '\0';
}

int main()
{
    char cValue[20];
    char CpyStr[20];

    printf("Enter the string : \n");
    scanf("%[^'\n']s",cValue);

    StrCpyCap(cValue, CpyStr);

    printf("Copied string is : %s",CpyStr);
    return 0;
}