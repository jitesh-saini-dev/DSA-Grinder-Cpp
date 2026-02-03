#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<char> s;
    string ss = "Hello";
    for (auto x : ss)
    {
        s.push(x);
    }

    while ((!s.empty()))
    {
        cout << s.top() << " ";
        s.pop();
    }
}