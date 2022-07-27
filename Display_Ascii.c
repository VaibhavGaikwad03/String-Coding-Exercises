/*
Write a program which displays ASCII table. Table contains symbol, Decimal, Hexadecimal and Octal representation of every member from 0 to 255.

*/

#include<stdio.h>

void DisplayAscii()
{
    int Dec = 0;

    while(Dec != 128)
    {   
        printf("Decimal : %d\nHex : %x\nOctal : %o\nCharacter : %c\n\n\n", Dec, Dec, Dec, Dec);
        Dec++;
    }
}   

int main()
{
    DisplayAscii();

    return 0;
}