/*
Write a program which accepts string from the user and display it in reverse order

Input : "Marvellous"
Output : "suollevraM"

*/

#include<stdio.h>

void StrRevX(char *str)
{
    char temp = 0;
    char *start = str;
    char *end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char cArr[20];

    printf("Enter the string : \n");
    scanf("%[^\n]s", cArr);

    StrRevX(cArr);

    printf("Reversed string is : %s\n",cArr);

    return 0;
}