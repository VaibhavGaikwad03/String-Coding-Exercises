/*
Write a program which accepts  string from the user and accept one character. return frequency of that character

Input : "Marvellous Multi OS"
Input : M
Output : 2

Input : "Marvellous Multi OS"
Input : W
Output : 0
*/

#include<stdio.h>

int CountChar(char *str, char cValue)
{
    int CountFreq = 0;

    while(*str != '\0')
    {
        if(*str == cValue)
        {
            CountFreq++;
        }
        str++;
    }
    return CountFreq;
}

int main()
{
    char cArr[20];
    char ch = '\0';
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s", cArr);

    printf("Enter the character to check the frequency in string : \n");
    scanf(" %c",&ch);

    iRet = CountChar(cArr, ch);

    printf("Frequency of '%c' in the string is : %d",ch, iRet);

    return 0;
}