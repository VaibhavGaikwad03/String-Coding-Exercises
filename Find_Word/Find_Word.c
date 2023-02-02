/*

Write a program which accepts string from and a word from the user and count how many time word occurred in string.

Input1 : Simba is my cat. He is so cute.
Input2 : is

Output : 2

*/

#include <stdio.h>
#include "stringlib.h"

int Find_Word(const char *str, const char *word)
{
    char temp[10];
    int iCnt1 = 0, iCnt2 = 0, iCount = 0;

    while (str[iCnt1] != '\0')
    {
        iCnt2 = 0;

        while (str[iCnt1] != ' ' && str[iCnt1] != '\0')
        {
            temp[iCnt2] = str[iCnt1];
            iCnt1++;
            iCnt2++;
        }
        temp[iCnt2] = '\0';

        if (str[iCnt1] != '\0')
            iCnt1++;

        if (str_cmp(temp, word) == 0)
            iCount++;
    }
    return iCount;
}

int main(void)
{
    char str[50];
    char word[10];
    int iRet = 0;

    puts("Enter the string : ");
    gets(str);

    puts("Enter the word to search : ");
    scanf("%s", word);

    iRet = Find_Word(str, word);

    printf("The word \"%s\" exists %d times in string\n", word, iRet);

    return 0;
}