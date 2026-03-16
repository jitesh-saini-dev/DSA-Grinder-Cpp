// 13. Largest Digit in Number
// Find the largest digit in a number.
// Example: n = 58329 → 9

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 58329;
    int largest = 0;

    while(n > 0)
    {
        int rem = n % 10;
        if(rem > largest)
        {
            largest = rem;
        }
        n = n / 10;
    }
    cout << largest;
}