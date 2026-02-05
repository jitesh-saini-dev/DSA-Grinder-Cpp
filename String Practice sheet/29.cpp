// 29. Find middle character of a string

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "mango";

    int mid = s.length() / 2;

    for (int i = 0; i <= mid; i++)
    {
        cout << s[i];
    }
}
