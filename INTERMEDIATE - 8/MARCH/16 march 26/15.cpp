// 15. Count Zeros in Number
// Count how many zeros are present.
// Example: n = 1002030 → 4

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 1002030;
    int count = 0;

    while (n > 0)
    {
        int rem = n % 10;

        if (rem == 0)
        {
            count++;
        }

        n = n / 10;
    }

    cout << count;
}