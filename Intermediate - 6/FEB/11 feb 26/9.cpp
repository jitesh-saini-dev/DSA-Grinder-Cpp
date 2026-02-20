// 9 Check if a number is palindrome using recursion

#include <bits/stdc++.h>
using namespace std;
bool checkpalindrome(int n, int rev = 0)
{
    if (n == 0)
        return rev;
    rev = rev * 10 + n % 10;
    return checkpalindrome(n / 10, rev);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (n == checkpalindrome(n))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
}