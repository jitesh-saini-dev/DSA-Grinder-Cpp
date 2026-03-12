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
    while (!q.empty())
    {
        cout << q.front();
        q.pop();
    }
}