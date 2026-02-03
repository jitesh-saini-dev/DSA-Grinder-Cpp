// 1. Reverse a string

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "hello";
    for (int i = s.length(); i >= 0; i--)
    {
        cout << s[i] << " ";
    }
}