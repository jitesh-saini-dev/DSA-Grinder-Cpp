#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    stack<int> s2;

    int n;

    for (int i = 0; i < 5; i++)
    {
        cout << "enter no: ";
        cin >> n;
        s.push(n);
    }

    while (!s.empty())
    {
        s2.push(s.top());
        s.pop();
    }
    while (!s2.empty())  
    {
        cout << s2.top() << " ";
        s2.pop();
    }
}