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

#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;
    for (int i = 1; i <= 5; i++)
    {
        int val;
        cout << "Enter values: ";
        cin >> val;
        q.push(val);
    }
    stack<int> s;

    while (!q.empty())
    {
        s.push(q.front());
        q.pop();
    }
    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}
