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
    vector<int> v;

    while (!q.empty())
    {
        v.push_back(q.front());
        q.pop();
    }
    v.pop_back();

    for (int x : v)
    {
        cout << x << " ";
    }
}