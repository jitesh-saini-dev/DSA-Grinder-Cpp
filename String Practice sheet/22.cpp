// 22. Reverse a string word by word

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "I love mango";
    string word = "", ans = "";

    for (int i = 0; i <= s.length(); i++)
    {
        if (i == s.length() || s[i] == ' ')
        {
            ans = word + " " + ans;
            word = "";
        }
        else
        {
            word += s[i];
        }
    }

    cout << ans;
}
