#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::getline;
 
void print_duplicates(char* str)
{
    int i = 0;
    int hash = 0, x;

    while (str[i] != '\0')
    {
        x = 1;
        x = x << str[i] - 97;

        if ((hash & x))
            cout << "\'" << str[i] << "\'" << " is duplicate." << endl;
        else
            hash = hash | x;
        i++;
    }
}

int main(void)
{
    char str[50];

    cout << "Enter the string: ";
    cin.getline(str, 50);

    print_duplicates(str);

    return 0;
}
