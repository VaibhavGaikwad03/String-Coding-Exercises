/*
Write a program which accepts  string from the user and count number of white spaces 

Input : "Marvellous"
Output : 0

Input : "Marvellous Infosystems by Piyush Manohar Khairnar"
Output : 5
*/

#include<stdio.h>

int CountSpaces(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char cArr[20];
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^\n]s", cArr);

    iRet = CountSpaces(cArr);

    printf("Count of white spaces are : %d\n",iRet);

    return 0;
}