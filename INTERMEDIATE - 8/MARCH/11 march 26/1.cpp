#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s1 = "qwe#rt";
    string s2 = "qwes#ba";
    stack<char> st1;
    stack<char> st2;
    for (auto x : s1)
    {
        if (x != '#')
            st1.push(x);
        else if (x == '#')
        {
            while (!st1.empty())
                st1.pop();
        }
    }
    for (auto x : s2)
    {
        if (x != '#')
            st2.push(x);
        else
        {
            while (!st2.empty())
                st2.pop();
        }
    }
    if (st1.size() == st2.size())
        cout << "true";
    else
        cout << "false";
}