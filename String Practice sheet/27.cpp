// 27. Check whether string starts with a vowel


#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Apple";

    if (s[0] == 'a' || s[0] == 'e' || s[0] == 'i' ||
        s[0] == 'o' || s[0] == 'u' ||
        s[0] == 'A' || s[0] == 'E' || s[0] == 'I' ||
        s[0] == 'O' || s[0] == 'U')
    {
        cout << "Starts with a vowel";
    }
    else
    {
        cout << "Does not start with a vowel";
    }
}
