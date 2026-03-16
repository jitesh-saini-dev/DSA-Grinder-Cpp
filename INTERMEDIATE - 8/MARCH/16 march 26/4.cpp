// 4. Armstrong Number
// Check if a number is an Armstrong number.
// Example: 153 = 13 + 53 + 33

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 153;
    int temp = n;
    int sum = 0;

    while (n)
    {
        int rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }

    if (sum == temp)
        cout << "Armstrong Number";
    else
        cout << "Not Armstrong";
}