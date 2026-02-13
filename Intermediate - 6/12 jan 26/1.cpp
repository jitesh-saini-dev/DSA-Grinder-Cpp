// medium ques...

// print the secondlargest element in the array.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 2, 2, 2, 2, 2, 2};
    int largest = INT_MIN;
    int secondlargest = INT_MIN;

    for (auto x : v)
    {
        if (x > largest)
        {
            secondlargest = largest;
            largest = x;
        }
        else if (x < largest && secondlargest > x)
        {
            secondlargest = x;
        }
    }
    if (secondlargest == INT_MIN)
        cout << -1;
    else
        cout << secondlargest;
}