/*
Write a program which accepts string from the user and copy that characters of string into another string by toggling the case

Input : "Marvellous Infosystems"

Output : "mARVELLOUS iNFOSYSTEMS"

*/

#include<stdio.h>

void StrCpyToggle(char *src, char *dest)
{
    while(*src != '\0')
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = (*src + 32);
        }
        else if((*src >= 'a') && (*src <= 'z'))
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

    StrCpyToggle(cArr, cBrr);

    printf("Copied Toggled string is : %s", cBrr);

    return 0;
}