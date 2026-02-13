//leetcode 1047
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "abbaca";
    stack<char> st;
    for (auto x : s)
    {
        if (st.empty())
        {
            st.push(x);
        }
        else if (x == st.top())
        {
            st.pop();
        }
        else
        {
            st.push(x);
        }
    }
    string ans = "";
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    reverse(ans.begin(), ans.end());
    cout << ans;
}