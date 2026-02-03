// 10. Count words in a string

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Man Go oeS";
    int count = 0;
    for (auto x : s)
    {
        if (x == ' ')
        {
            count++;
        }
    }
    cout << count + 1;
}
