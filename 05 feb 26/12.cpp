// delete first and last element of queue

#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    q.pop();
    stack<int> s;

    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    s.pop();
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    
}
