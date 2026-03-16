// 19. Count Frequency of a Digit
// Given n and digit d, count frequency of d.
// Example: n = 1223334, d = 3 → 3

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 1223334;
    int d = 3;
    int count = 0;

    while(n > 0)
    {
        int rem = n % 10;
        if(rem == d)
            count++;
        n = n / 10;
    }

    cout << count;
}