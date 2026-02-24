// Q2.
// Function takes two integer vectors and returns the count of even numbers in total.
// In main(), store result, then subtract 5 from it, and print the final value.

#include <bits/stdc++.h>
using namespace std;
int Even(vector<int> v1, vector<int> v2)
{
    int even1 = 0, even2 = 0;
    for (auto x : v1)
    {
        if (x % 2 == 0)
        {
            even1++;
        }
    }
    for (auto x : v2)
    {
        if (x % 2 == 0)
        {
            even2++;
        }
    }
    return even1 + even2;
}

int main()
{
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 5, 6};
    cout << Even(v1, v2) - 5;
}