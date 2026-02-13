#include <bits/stdc++.h>
using namespace std;

int evennum(vector<int> v1)
{
    int sum = 0;
    for (auto x : v1)
        sum += x;
    return sum;
}

vector<int> oddnum(vector<int> &v2)
{
    for (auto x : v2)
        cout << x << " ";
}

void zeronum(vector<int> v3)
{
    for (int i = v3.size() - 1; i >= 0; i--)
        cout << v3[i] << " ";
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (n == 0)
    {
        vector<int> v3 = {1, 2, 3, 4, 5};
        zeronum(v3);
    }
    else if (n % 2 == 0)
    {
        vector<int> v1 = {1, 2, 3, 4, 5};
        cout << evennum(v1);
    }
    else
    {
        vector<int> v2 = {1, 3, 5, 7, 9};
        oddnum(v2);
    }
}
