//return factorial of a number using recursion
#include <bits/stdc++.h>
using namespace std;
int sum(int n)
{
    if (n == 1)
        return 1;          // base case
    return n * sum(n - 1); // recursive case
}
int main()
{
    cout << sum(5);
}