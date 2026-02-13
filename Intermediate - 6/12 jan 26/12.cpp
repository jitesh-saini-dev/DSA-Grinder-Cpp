// 12 Count even and odd numbers in an array.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    int eve = 0, odd = 0;
    for (auto x : v)
    {
        if (x % 2 == 0)
            eve++;
        else
            odd++;
    }
    cout << "Even: " << eve << endl;
    cout << "Odd: " << odd << endl;
}