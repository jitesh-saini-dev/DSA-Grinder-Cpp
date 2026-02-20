// 24. Copy one string into another without using inbuilt function

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "mango";
    string s2 = "";

    for (int i = 0; i < s1.length(); i++)
    {
        s2 += s1[i];
    }

    cout << s2;
}
