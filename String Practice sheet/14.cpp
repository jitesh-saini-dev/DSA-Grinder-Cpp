// 14. Check if a string contains only digits

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "madioa12m";

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] < '0' || s[i] > '9')
        {
            cout << "Not only digits";
            return 0;
        }
    }
    cout << "Only digits";
}
