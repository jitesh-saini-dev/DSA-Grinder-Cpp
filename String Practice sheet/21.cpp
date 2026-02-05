// 21. Count number of lowercase letters

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "MaDiOaM";
    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            count++;
        }
    }

    cout << count;
}
