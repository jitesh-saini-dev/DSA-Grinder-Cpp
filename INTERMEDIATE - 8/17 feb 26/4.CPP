#include <bits/stdc++.h>
using namespace std;

int largest(vector<int> v)
{
    int max = INT_MIN;
    for (auto x : v)
    {
        if (x > max)
        {
            max = x;
        }
    }
    return max;
}
int main()
{
    vector<int> v = {-1, -22, -3, -4, -5};
    cout << largest(v);
}