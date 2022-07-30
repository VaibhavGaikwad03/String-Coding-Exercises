/*
Write a program which accepts  string from the user and accept one character. return the index of first occurence of that character 

Input : "Marvellous Multi OS"
Input : u
Output : 8

Input : "Marvellous Multi OS"
Input : W
Output : -1
*/

#include<stdio.h>

int FirstOcc(char str[], char cValue)
{
    int i = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == cValue)
        {
            break;
        }
    }

    if(str[i] == '\0')
    {
        return -1;
    }
    else
    {
        return i;
    }
}

int main()
{
    char cArr[20];
    char ch = '\0';
    int iRet = 0;

    printf("Enter the string : \n");
    scanf("%[^'\n']s", cArr);

    printf("Enter the character to find the index from the string : \n");
    scanf(" %c",&ch);

    iRet = FirstOcc(cArr, ch);

    if(iRet == -1)
    {
        printf("Character not found !!\n");
    }
    else
    {
        printf("First occurence of '%c' is at index : %d",ch, iRet);
    }

    return 0;
}