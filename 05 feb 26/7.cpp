// Return maximum value of queue

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

    int max = 0;
    while (!q.empty())
    {
        if (q.front() > max)
        {
            max = q.front();
        }
        q.pop();
    }
    cout << max;
}
