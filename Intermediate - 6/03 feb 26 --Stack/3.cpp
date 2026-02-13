// Reverse a string using stack.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello";
    stack<char> st;
    for (auto x : s)
    {
        st.push(x);
    }
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    // cout << s; // refrence pe jake change nhi hua mtlb orginal string same h.
    
}