/*
Q.1 Write a function to find the longest common prefix string amongst an array of strings. If there is no common prefix, return an empty string "".
The function should return a string, the longest common prefix of all strings in the input list.

Input: 4
Input: ["apple", "apricot", "apology", "app"]
Output: "ap"

Input: 4
Input: ["python", "java", "javascript", "c++"]
Output: ""

Input: 3
Input: ["testing", "test", "tester"]
Output: "test"

Author: Vaibhav
*/

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

string largest_common_prefix(vector<string> &strings)
{
    int i, j;
    string str;

    for (i = 0; i < strings[0].size(); i++)
    {
        for (j = 1; j < strings.size(); j++)
        {
            if (strings[0][i] != strings[j][i])
                return str;
        }
        str.push_back(strings[0][i]);
    }
    return str;
}

int main(void)
{
    int i, n;
    string str;
    vector<string> strings;

    cout << "\nEnter the number of strings: ";
    cin >> n;

    cout << "\nEnter the strings one by one:\n";
    for (i = 0; i < n; i++)
    {
        cin >> str;
        strings.push_back(str);
    }

    str = largest_common_prefix(strings);

    if (!str.empty())
        cout << "\nCommon largest prefix between strings is \"" << str << "\"\n";
    else
        cout << "\nNot found!\n";

    return 0;
}