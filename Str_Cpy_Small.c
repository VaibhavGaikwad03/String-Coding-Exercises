/*
Write a program which accepts string from the user and copy small characters of that string into another string

Input : "Marvellous multi OS"

Output : "arvellous multi"

*/

#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z') || (*src == ' '))
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

    StrCpySmall(cValue, CpyStr);

    printf("Copied string is : %s",CpyStr);
    return 0;
}