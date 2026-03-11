#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    int n;

    for (int i = 0; i < 5; i++)
    {
        cout << "enter no: ";
        cin >> n;
        s.push(n);
    }

    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}