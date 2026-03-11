#include <iostream>
#include <stack>
using namespace std;

int main()
{

    string s = "Hello";
    stack<char> st;

    for (auto x : s)
    {
        st.push(x);
    }

    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
}