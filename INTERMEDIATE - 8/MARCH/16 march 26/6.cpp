// 6. Product of Digits
// Return the product of digits of a number.
// Example: 123 → 1×2×3 = 6


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 12345;
    int prod = 1;
    while (n)
    {
        int rem = n % 10;
        prod *= rem;
        n = n / 10;
    }
    cout << prod;
}