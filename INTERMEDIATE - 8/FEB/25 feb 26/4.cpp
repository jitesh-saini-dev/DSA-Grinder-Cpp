#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "        cat      dog    modi     hlo";
    int count = 0;

    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] != ' ')
        {
            count++;
        }
        else
            break;
    }

    cout << count;
}