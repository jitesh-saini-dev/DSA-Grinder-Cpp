#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;

    for (int i = 100; i >=0; i--)
    {
        if (i % 2 != 0)   
        {
            s.push(i);    
        }
    }

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }
}