/*
Write a program which accepts string from the user and convert it into uppercase

Input : "Marvellous Multi OS"
Output : "MARVELLOUS MULTI OS"

*/

#include<stdio.h>
#include<string.h>

void StrUprX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char cArr[20];

    printf("Enter the string : \n");
    scanf("%[^\n]s", cArr);

    StrUprX(cArr);

    printf("Modified string is : %s\n",cArr);

    return 0;
}