/*
Write a program which accepts string from the user and copy that characters of string into another string by converting all Capital characters into samll case

Input : "Marvellous Infosystems"

Output : "marvellous infosystems"

*/

#include<stdio.h>

void StrCpySmall(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = (*src + 32);
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

    StrCpySmall(cArr, cBrr);

    printf("Copied Small string is : %s", cBrr);

    return 0;
}