// 16. Sum of First and Last Digit
// Find the sum of the first and last digit.
// Example: n = 4567 → 4+7 = 11

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 4567;
    int temp = n;

    int last = n % 10;

    while (temp >= 10)
    {
        temp /= 10;
    }
    int first = temp;

    int sum = first + last;

    cout << sum;
}