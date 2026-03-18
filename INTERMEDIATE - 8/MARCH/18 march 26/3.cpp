// // count no of digits using recursion
// #include <bits/stdc++.h>
// using namespace std;
// int countDigits(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     return 1 + countDigits(n / 10);
// }
// int main()
// {
//     int n = 12345;
//     cout << countDigits(n);
// }

#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

void countDigits(int n, int c)
{
    if (n == 0)
    {
        cout << c;
        return;
    }

    countDigits(n / 10, c + 1);
}

int main()
{
    int n = 12345;
    countDigits(n, 0);
}