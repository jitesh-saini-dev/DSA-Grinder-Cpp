#include <bits/stdc++.h>
using namespace std;
void reverse(vector<int> v, int i)
{
    if (i < 0)
    {
        return;
    }
    cout << v[i] << " ";
    reverse(v, i - 1);
}
int main()
{
    vector<int> v = {1, 2, 3};
    reverse(v, v.size() - 1);
}