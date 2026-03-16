// 7. Count Even and Odd Digits
// Count the number of even and odd digits in n.
// Example: n = 123456 → Even: 3, Odd: 3

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 123456;

    int even = 0;
    int odd = 0;

    while (n)
    {
        int rem = n % 10;

        if (rem % 2 == 0)
            even++;
        else
            odd++;

        n = n / 10;
    }

    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
}