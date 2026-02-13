// remove duplicate values from queue 

//---------using set----------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(2);
    q.push(4);
    q.push(1);
    q.push(5);

    set<int> st;

    while (!q.empty())
    {
        st.insert(q.front());  
        q.pop();
    }

    for (int x : st)
    {
        cout << x << " ";
    }

    return 0;
}
