/*
Write a program which accepts string from the user and return difference between frequency of small characters and frequency of capital characters 

Input : "MarvellouS"
Output : 6 (8 - 2)
*/

#include<stdio.h>

int Differnce(char str[])
{
    int iCountCap = 0, iCountSmall = 0;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCountCap++;
        }
        if(*str >= 'a' && *str <= 'z')
        {
            iCountSmall++;
        }
        str++;
    }
    return iCountSmall - iCountCap;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the String : \n");
    scanf("%[^\n]s",Arr); 

    iRet = Differnce(Arr);

    printf("Difference between Capital and Small letters is : %d\n",iRet);

    return 0;
}