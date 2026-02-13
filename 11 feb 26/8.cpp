// 8 Reverse a number using recursion

#include <bits/stdc++.h>
using namespace std;

int reverse(int n, int rev)
{
    if (n == 0)
        return rev;
    int lastDigit = n % 10;
    rev = rev * 10 + lastDigit;
    return reverse(n / 10, rev);
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int rev = 0;
    cout << reverse(n, rev);
}