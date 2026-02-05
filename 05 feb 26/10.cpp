// Return minimum element of queue

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

    int min = INT_MAX;
    while (!q.empty())
    {
        if (q.front() < min)
        {
            min = q.front();
        };
        q.pop();
    }
    cout << min;
}
