/*
Write a program which accepts string from the user and copy that characters of string into another string by converting all small characters into capital case

Input : "Marvellous Infosystems"

Output : "MARVELLOUS INFOSYSTEMS"

*/

#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'a') && (*src <= 'z'))
        {
            *dest = (*src - 32);
        }
        else
        {
            *dest = *src;
        }
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char cArr[30];
    char cBrr[30];

    printf("Enter the string : \n");
    scanf("%[^'\n']s",cArr);

    StrCpyCap(cArr, cBrr);

    printf("Copied Capital string is : %s", cBrr);

    return 0;
}