// 20. Sum of Squares of Digits
// Return sum of squares of digits.
// Example: n = 123 → 12+22+32 = 14

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 123;
    int sum = 0;

    while (n > 0)
    {
        int rem = n % 10;
        sum += rem * rem;
        n /= 10;
    }

    cout << sum;
}