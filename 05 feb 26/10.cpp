// print  even odd count of queue

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

    int even=0;
    int odd=0;

    while (!q.empty())
    {
        if (q.front() % 2 == 0)
        {
            even++;
        }
        else odd++;
        q.pop();
    }
    cout<<even<<" ";
    cout<<odd;
}
