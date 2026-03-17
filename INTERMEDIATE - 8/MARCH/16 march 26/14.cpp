// 14. Smallest Digit in Number
// Find the smallest digit in a number.
// Example: n = 58329 → 2

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 58329;
    int smallest = INT_MAX;

    while (n > 0)
    {
        int rem = n % 10;

        if (rem < smallest)
        {
            smallest = rem;
        }

        n = n / 10;
    }

    cout << smallest;
}