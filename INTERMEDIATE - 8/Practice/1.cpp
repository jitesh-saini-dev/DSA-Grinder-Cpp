#include <bits/stdc++.h>
using namespace std;
string check(int a, int b)
{
    if (a % b < 0)
    {
        return "ok";
    }
    else if (a % b <= 5)
    {
        return "medium";
    }
    else
        return "no";
}
int main()
{
    int a;
    cout << "Enter a: ";
    cin >> a;
    int b;
    cout << "Enter b: ";
    cin >> b;

    cout << check(a, b);
}