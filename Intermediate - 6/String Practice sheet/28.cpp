// 28. Check whether string ends with a consonant

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "mango";

    char ch = s[s.length() - 1];

    if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
        ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U')
    {
        cout << "Ends with a consonant";
    }
    else
    {
        cout << "Ends with a vowel";
    }
}
