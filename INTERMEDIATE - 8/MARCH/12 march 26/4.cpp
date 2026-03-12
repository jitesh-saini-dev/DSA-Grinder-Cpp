// print largest
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
    int largest = 0;
    while (!q.empty())
    {
        if (q.front() > largest)
        {
            largest = q.front();
        }
        q.pop();
    }
    cout << largest;
}