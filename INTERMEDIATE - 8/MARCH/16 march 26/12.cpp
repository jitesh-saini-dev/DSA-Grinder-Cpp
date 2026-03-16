// 12. Sum of Even Digits
// Find the sum of only even digits in n.
// Example: n = 123456 → 2+4+6 = 12

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 123456;
    int sum = 0;

    while (n > 0)
    {
        int rem = n % 10;

        if (rem % 2 == 0)
        {
            sum += rem;
        }

        n = n / 10;
    }

    cout << sum;
}