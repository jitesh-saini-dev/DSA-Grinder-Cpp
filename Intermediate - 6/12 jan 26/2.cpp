
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    int smallest = INT_MAX;
    int secondsmallest = INT_MAX;

    for (auto x : v)
    {
        if (x < smallest)
        {
            secondsmallest = smallest;
            smallest = x;
        }
        else if (x > smallest && x < secondsmallest)
        {
            secondsmallest = x;
        }
    }
    if (secondsmallest == INT_MAX)
        cout << "-1";
    else
        cout << secondsmallest;

    return 0;
}