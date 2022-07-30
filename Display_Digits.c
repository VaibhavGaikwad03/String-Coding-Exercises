/*
Write a program which accepts string from the user and display only digits from that string 

Input : "marve89llous121"
Output : "89121"

Input : Demo
Output : 

*/

#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if(*str >= '0' && *str <= '9')
        {
            printf("%c",*str);
        }
        str++;
    }
}

int main()
{
    char cArr[20];

    printf("Enter the string : \n");
    scanf("%[^\n]s", cArr);

    DisplayDigit(cArr);

    return 0;
}