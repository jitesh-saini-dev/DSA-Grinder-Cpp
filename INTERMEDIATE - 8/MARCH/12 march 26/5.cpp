// print smallest

#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    int n;
    for (int i = 0; i < 5; i++)
    {
        cout << "enter values: ";
        cin >> n;
        q.push(n);
    }
    int smallest = INT_MAX;
    while (!q.empty())
    {
        if (q.front() < smallest)
        {
            smallest = q.front();
        }
        q.pop();
    }
    cout << smallest;
}