/*
Write a program which accepts string from the user and copy that characters of string into another string in reverse order

Input : "Marvellous Python"

Output : "nothyP suollevraM"

*/

#include<stdio.h>

void StrCpyRev(char *src, char *dest)
{
    char *end = src;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(*src != '\0')
    {
        *dest = *end;
        
        src++;
        dest++;
        end--;
    }
    *dest = '\0';
}

int main()
{
    char cArr[30];
    char cBrr[30];

    printf("Enter the string : \n");
    scanf("%[^'\n']s",cArr);

    StrCpyRev(cArr, cBrr);

    printf("Copied and reversed string is : %s", cBrr);

    return 0;
}