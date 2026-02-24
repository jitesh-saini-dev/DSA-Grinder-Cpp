// replace space with @

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "a p p";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
            s[i] = '@';
    }
    cout << s;
}