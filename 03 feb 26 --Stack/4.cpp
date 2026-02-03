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
    int i=0;
    while ((!s.empty()))
    {
       ss[i]=s.top();
       i++;
       s.pop();
    }
    cout<<ss<<" ";
}