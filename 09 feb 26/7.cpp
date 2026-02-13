// print number in reverse order---

#include <bits/stdc++.h>
using namespace std;

void rev(int n, int &temp)
{
    if (n <= 0)
    {
        return;
    }
    int digits = n % 10;
    temp = temp * 10 + digits;
    rev(n /= 10, temp);
}
int main()
{
    int n = 12345;
    int temp = 0;
    rev(n, temp);
    cout<<temp;
}