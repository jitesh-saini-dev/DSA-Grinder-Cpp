// 2. Check if a string is palindrome
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "madam";
    string temp = s;
    string str = "";

    for (int i = s.length() - 1; i >= 0; i--)
    {
        str += s[i];
    }

    if (str == temp)
        cout << "palindrome";
    else
        cout << "not palindrome";
}
