// 18. Check Perfect Square
// Check if a number is a perfect square.
// Example: 16 → true, 20 → false

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 16;
    int i = 1;
    bool perfect = false;

    while (i * i <= n)
    {
        if (i * i == n)
        {
            perfect = true;
            break;
        }
        i++;
    }

    if (perfect)
        cout << "Perfect Square";
    else
        cout << "Not Perfect Square";
}