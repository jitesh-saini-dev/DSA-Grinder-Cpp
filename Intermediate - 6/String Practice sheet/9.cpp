// 9. Replace all spaces with @

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
        else{
            ans+='@';
        }
       
    }
    cout<<ans;
}
