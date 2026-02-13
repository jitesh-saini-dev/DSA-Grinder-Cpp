// 7 Find sum of digits of a number using recursion

#include <bits/stdc++.h>
using namespace std;
int summ(int n)
{
    if (n == 0)
        return 0;
    return (n % 10) + summ(n / 10);
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << summ(n);
}