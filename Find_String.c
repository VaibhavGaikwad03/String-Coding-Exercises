/*

Write a program which accepts two strings from the user and find out how much times second string occurs in a first string.

Input1 : try not to become a man of success but rather to be a man of value.
Input2 : a man of

Output : String "a man of" exists 2 times

*/

#include <stdio.h>

int FindString(const char *str1, const char *str2)
{
    int iCnt1 = 0, iCnt2 = 0, iCnt3 = 0, iCount = 0;

    for (iCnt1 = 0; str1[iCnt1] != '\0'; iCnt1++)
    {
        iCnt3 = iCnt1;

        for (iCnt2 = 0; str2[iCnt2] != '\0'; iCnt2++, iCnt3++)
        {
            if (str1[iCnt3] != str2[iCnt2])
                break;
        }
        if (str2[iCnt2] == '\0')
        {
            iCount++;
            iCnt1 = iCnt3;
        }
    }
    return iCount;
}

int main(void)
{
    char str1[100];
    char str2[50];
    int iRet = 0;

    puts("Enter the string : ");
    gets(str1);

    puts("Enter the string to search : ");
    gets(str2);

    iRet = FindString(str1, str2);

    printf("\nString \"%s\" exists %d times\n", str2, iRet);

    return 0;
}