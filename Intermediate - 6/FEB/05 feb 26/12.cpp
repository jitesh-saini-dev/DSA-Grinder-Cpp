// Remove first k element from queue

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

    int k = 3;

    if (k > q.size())
    {
        k = q.size();
    }

    for (int i = 0; i < k; i++)
    {
        q.pop();
    }

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
