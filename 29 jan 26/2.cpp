// insertion sort---

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> v = {8, 3, 5, 2, 4};
    int n = v.size();
    for (int i = 1; i < n; i++)
    {
        int key = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > key)
        {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = key;
    }
    for (int x : v)
        cout << x << " ";
}