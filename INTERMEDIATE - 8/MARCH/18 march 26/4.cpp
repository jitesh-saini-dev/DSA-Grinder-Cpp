#include <bits/stdc++.h>
using namespace std;

void reverse(int n, int rev)
{
    if (n == 0)
    {
        cout << rev;
        return;
    }
    rev = rev * 10 + (n % 10);

    reverse(n / 10, rev);
}

int main()
{
    int n = 12345;
    reverse(n, 0);
}