/*
Write a program to check string is anagram or not
Input1:
decimal

Input2:
medical 

Output: True
*/

#include <iostream>
using std::cout;
using std::cin;

int check_anagram(char* str1, char* str2)
{
    int i;
    int hash[26] = { 0 };

    for (i = 0; str1[i] != '\0'; i++)
        hash[str1[i] - 97]++;

    for (i = 0; i < str2[i] != '\0'; i++)
    {
        hash[str2[i] - 97]--;

        if (hash[str2[i] - 97] < 0)
            return 0;
    }
    return 1;
}

int main(void)
{
    char str1[20];
    char str2[20];

    cout << "Enter first string: ";
    cin.getline(str1, 20);

    cout << "Enter second string: ";
    cin.getline(str2, 20);

    if (check_anagram(str1, str2))
        cout << "\nStrings are anagram.\n";
    else
        cout << "\nStrings are not anagram.\n";

    return 0;
}
