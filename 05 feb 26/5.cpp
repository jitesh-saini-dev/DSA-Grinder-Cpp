//reverse queue using vector
#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    vector<int> v;

    while (!q.empty())
    {
        v.push_back(q.front());
        q.pop();
    }
    reverse(v.begin(), v.end());
    for (auto x : v)
    {
        cout << x << " ";
    }
}
