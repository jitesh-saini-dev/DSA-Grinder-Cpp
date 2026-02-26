#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "1@3cd9op";
    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            count++;
        }
    }
    cout << count;
}