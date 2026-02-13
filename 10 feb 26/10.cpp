// return size of stack using recursion
#include <bits/stdc++.h>
using namespace std;
int countSize(stack<int> s)
{
    if (s.empty())
        return 0;
    s.pop();
    return 1 + countSize(s);
}
int main()
{
    stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    cout << "Size of stack = " << countSize(s);
}