#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;
    s.push(2);
    s.push(4);
    s.push(6);
    s.push(9);
    s.push(1);
    s.push(2); 

    int largest = 0;
    while (!s.empty())
    {
        if (s.top() > largest)
        {
            largest = s.top();
        }
        s.pop();
    }
    cout << largest;
} 