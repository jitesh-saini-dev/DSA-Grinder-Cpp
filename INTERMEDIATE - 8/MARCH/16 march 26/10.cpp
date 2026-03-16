// 10. Print All Divisors
// Print all divisors of n.
// Example: n = 12 → 1 2 3 4 6 12

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 12;

    for(int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            cout << i << " ";
        }
    }
}