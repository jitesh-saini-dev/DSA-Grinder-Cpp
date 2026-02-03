// 5. Find length of string without using length()

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "ManGoeS";
    int count = 0;

    for (char c : s)
    {
        count++;
    }

    cout << count;
}
