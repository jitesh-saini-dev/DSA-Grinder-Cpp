// 1 Print numbers from N to 1 using recursion.

#include <bits/stdc++.h>
using namespace std;
void printNumbers(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    printNumbers(n - 1);
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printNumbers(n);
    return 0;
}