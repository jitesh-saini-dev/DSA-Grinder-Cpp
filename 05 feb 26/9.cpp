// delete middle element of queue

#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    // q.push(5);
    vector<int> v;
    while (!q.empty())
    {
        v.push_back(q.front());
        q.pop();
    }
    int mid = v.size() / 2;
    for (int i = 0; i < v.size(); i++)
    {
        if (i == mid)
        {
            continue;
        }
        else
        {
            q.push(v[i]);
        }
    }
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    if (q.size() % 2 == 0)
    {
        mid = v.size() / 2 - 1;
    }
}