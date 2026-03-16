// 17. Check Strong Number
// A number is strong if sum of factorial of digits equals the number.
// Example: 145 = 1! + 4! + 5!

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 145;
    int temp = n;
    int sum = 0;

    while (temp > 0)
    {
        int rem = temp % 10;
        int fact = 1;
        for (int i = 1; i <= rem; i++)
            fact *= i;
        sum += fact;
        temp /= 10;
    }

    if (sum == n)
        cout << "Strong Number";
    else
        cout << "Not Strong Number";
}