// 3. Count Digits
// Given an integer n, return the number of digits.
// Example: n = 123456 → Output: 6


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 12345;
    int count = 0;
    while (n)
    {
        n = n / 10;
        count++;
    }
    cout << count;
}