// 1. Reverse Integer
// Given an integer n, reverse its digits.
// Example: 12345 → 54321

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 12345;
    int rev = 0;
    while (n)
    {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    cout << rev;
}