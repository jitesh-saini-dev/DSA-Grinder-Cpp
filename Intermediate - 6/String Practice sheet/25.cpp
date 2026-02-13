// 25. Find ASCII value of each character


#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Ma1#";

    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i] << " -> " << (int)s[i] << endl;
    }
}
