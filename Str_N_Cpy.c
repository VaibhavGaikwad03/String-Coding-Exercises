/*
Write a program which accepts  string from the user and copy the contents of that string into another string.(Implement strncpy)

Input : "Marvellous Multi OS"
Input : 10
Output : "Marvellous"

*/

#include<stdio.h>

void StrNCpyX(char *src, char *dest, int iNo)
{
    int i = 0;

    for(i = 0; i < iNo; i++)
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
    int iValue = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s",cValue);

    printf("Enter the number of characters that you want to copy : \n");
    scanf(" %d", &iValue);

    StrNCpyX(cValue, CpyStr, iValue);

    printf("Copied string is : %s",CpyStr);
    return 0;
}