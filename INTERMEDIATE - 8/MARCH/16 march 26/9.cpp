// 9. Check Prime
// Check whether a number is prime.
// Example: 7 → Prime, 10 → Not Prime

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n = 7;
//     int count = 0;

//     for(int i = 1; i <= n; i++)
//     {
//         if(n % i == 0)
//         {
//             count++;
//         }
//     }

//     if(count == 2)
//         cout << "Prime";
//     else
//         cout << "Not Prime";
// }

//-----------another way------------------
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 7;
    bool factor = false;

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            factor = true;
            break;
        }
    }

    if (!factor && n > 1)
        cout << "Prime";
    else
        cout << "Not Prime";
}