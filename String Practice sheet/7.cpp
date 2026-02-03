// 7. Remove spaces from a string

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Man Go oeS";
    string ans = "";
    for (auto x : s)
    {
        if (x != ' ')
        {
            ans += x;
        }
       
    }
    cout<<ans;
}
