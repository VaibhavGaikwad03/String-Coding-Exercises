/*
Write a program which accepts string from the user and copy that characters of string into another string by removing all white spaces

Input : "Marvel   lous Pyt  hon"

Output : "MarvellousPython"

*/
 
#include<stdio.h>

void StrCpyRmSpaces(char *src, char *dest)
{
    while(*src != '\0')
    {
        if(*src != ' ')
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
    char cArr[30];
    char cBrr[30];

    printf("Enter the string : \n");
    scanf("%[^'\n']s",cArr);

    StrCpyRmSpaces(cArr, cBrr);

    printf("Copied and white sapaces removed string is : %s", cBrr);

    return 0;
}
