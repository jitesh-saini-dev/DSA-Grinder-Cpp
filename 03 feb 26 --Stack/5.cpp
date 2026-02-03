// take two strings s1,s2 insert value of both strings in stack and make a new string ans with stack values;

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "Dog";
    string s2 = "Cat";
    stack<char> st;
    string ans = "";

    for (auto x : s1)
    {
        st.push(x);
    }

    for (auto x : s2)
    {
        st.push(x);
    }

    while ((!st.empty()))
    {
        ans += st.top();
        st.pop();
    }
    cout << ans << " ";
}