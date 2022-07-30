/*
Write a program which accepts string from the user and toggle the case

Input : "Marvellous Multi OS"
Output : "mARVELLOUS mULTI os"

*/

#include<stdio.h>

void StrToggleX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char cArr[20];

    printf("Enter the string : \n");
    scanf("%[^\n]s", cArr);

    StrToggleX(cArr);

    printf("Toggled string is : %s\n",cArr);

    return 0;
}