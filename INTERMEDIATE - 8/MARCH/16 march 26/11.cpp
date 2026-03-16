// 11. Reverse First and Last Digit
// Swap the first and last digit of a number.
// Example: n = 12345 → 52341

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n = 12345;
    int first = 0;
    int last = n % 10; // 5
    n = n / 10;
    vector<int> v;
    while (n > 0)
    {
        if (n > 10)
        {
            v.push_back(n % 10);
        }
        else
        {
            first = n;
        }
        n = n / 10;
    }
    reverse(v.begin(), v.end());
    int ans = last;
    for (auto x : v)
    {
        ans = ans * 10 + x;
    }
    ans = ans * 10 + first;
    cout << ans;
}