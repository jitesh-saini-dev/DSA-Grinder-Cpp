#include <bits/stdc++.h>
using namespace std;

int greatest(int a, int b, int c)
{
    if (a > b && a > c)
    {
        return a;
    }
    else if (b > a && b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
    // return -1;
}
int main()
{
    int a, b, c;
    cout << "enter a, b and c: ";
    cin >> a >> b >> c;
    cout << greatest(a, b, c);
}