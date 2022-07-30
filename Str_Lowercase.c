/*
Write a program which accepts string from the user and convert it into lowercase

Input : "Marvellous Multi OS"
Output : "marvellous multi os"

*/

#include<stdio.h>
#include<string.h>

void StrLwrX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
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

    StrLwrX(cArr);

    printf("Modified string is : %s\n",cArr);

    return 0;
}