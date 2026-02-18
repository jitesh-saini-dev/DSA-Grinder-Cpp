#include <bits/stdc++.h>
using namespace std;

int targetcount(vector<int> v, int b)
{
    int count = 0;
    int i = 0;
    int j = v.size() - 1;
    sort(v.begin(), v.end());
    while (i < j)
    {
        if (v[i] + v[j] == b)
        {
            count++;
            i++;
            j--;
        }
        else if (v[i] + v[j] > b)j--;
        else i++;
    }
    return count;
}
int main()
{
    int target = 8;
    vector<int> v = {3, 6, 2, 7, 1, 9};
    cout << targetcount(v, target);
}
