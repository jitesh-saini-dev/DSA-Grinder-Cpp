// 13. Check if a string contains only alphabets
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "madioa12m";

    for (int i = 0; i < s.length(); i++)
    {
        if (!((s[i] >= 'A' && s[i] <= 'Z') ||
              (s[i] >= 'a' && s[i] <= 'z')))
        {
            cout << "Not Only alphabets.";
            return 0;
        }
    }

    cout << "Only alphabets.";
}
