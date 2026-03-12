
// reverse
#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    stack<int> st;
    int n;
    for (int i = 0; i < 5; i++)
    {
        cout << "enter values: ";
        cin >> n;
        q.push(n);
    }
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}