// 5. Sum of Digits
// Return the sum of all digits of a number.
// Example: 1234 → 1+2+3+4 = 10

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 12345;
    int sum = 0;
    while (n)
    {
        int rem = n % 10;
        sum += rem;
        n = n / 10;
    }
    cout << sum;
}