// 20. Count number of uppercase letters

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "MaDiOaM";
    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            count++;
        }
    }

    cout << count;
}
