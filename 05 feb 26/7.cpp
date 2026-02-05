// print only sum of queue

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

    int sum = 0;
    while (!q.empty())
    {
        sum += q.front();
        q.pop();
    }
    cout << sum;
}
