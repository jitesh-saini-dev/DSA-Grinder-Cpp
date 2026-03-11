#include <iostream>
#include <stack>
using namespace std;

int main()
{

    int n = 1234;
    int rev = 0;
    stack<int> st;

    while (n > 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    while (rev > 0)
    {
        st.push(rev % 10);
        rev = rev / 10;
    }

    while (!st.empty())
    {
        cout << st.top();
        st.pop();
    }
}