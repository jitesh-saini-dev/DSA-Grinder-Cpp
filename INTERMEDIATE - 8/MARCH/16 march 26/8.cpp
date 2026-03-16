// 8. Factorial of a Number
// Compute factorial of n.
// Example: 5! = 120

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n = 5;
//     int fact = 1;

//     for (int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }

//     cout << fact;
// }

//----------using while---------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 5;
    int fact = 1;

    while (n)
    {
        fact *= n;
        n = n - 1;
    }
    cout << fact;
}
