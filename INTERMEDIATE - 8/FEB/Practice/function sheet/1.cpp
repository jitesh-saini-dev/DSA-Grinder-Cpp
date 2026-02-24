// Q1.
// Function takes two integer vectors and returns the sum of elements from both.
// In main(), store result in a variable, then multiply it by 3 and print it.

#include <bits/stdc++.h>
using namespace std;
int sum(vector<int> v1, vector<int> v2)
{
    int sum1 = 0, sum2 = 0;
    for (auto x : v1)
    {
        sum1 += x;
    }
    for (auto x : v2)
    {
        sum2 += x;
    }
    return sum1 + sum2;
}

int main()
{
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {4, 5, 6};
    cout << sum(v1, v2) * 3;
}