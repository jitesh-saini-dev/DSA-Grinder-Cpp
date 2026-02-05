//---------Reverse value of queue using string-------------

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     queue<int> q;
//     string ans = "";
//     for (int i = 1; i <= 5; i++)
//     {
//         int val;
//         cout << "Enter values: ";
//         cin >> val;
//         ans += val;
//     }
//     reverse(ans.begin(),ans.end());
//     for (auto x : ans)
//     {
//         q.push(x);
//     }

//     while (!q.empty())
//     {
//         cout << q.front() << " ";
//         q.pop();
//     }
// }

//---------Reverse value of queue using Stack-------------

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     queue<int> q;
//     for (int i = 1; i <= 5; i++)
//     {
//         int val;
//         cout << "Enter values: ";
//         cin >> val;
//         q.push(val);
//     }
//     stack<int> st;
//     while (!q.empty())
//     {
//         st.push(q.front());
//         q.pop();
//     }
//     while (!st.empty())
//     {
//         cout << st.top() << " ";
//         st.pop();
//     }
// }

//---------Reverse value of queue using Vector-------------

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
