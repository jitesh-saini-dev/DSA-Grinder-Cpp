// 2. Palindrome Number
// Check whether a number is palindrome.
// Example: 121 → true, 123 → false

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 12321;
    int temp = n;
    int rev = 0;

    while (n)
    {
        int rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }

    if (temp == rev)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}