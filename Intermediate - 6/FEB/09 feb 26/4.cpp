// print values of the vector in reverse order---

// #include <bits/stdc++.h>
// using namespace std;
// void print(vector<int> v, int i)
// {
//     if (i < 0)
//     {
//         return;
//     }
//     cout << v[i] << " ";
//     print(v, i - 1);
// }
// int main()
// {
//     vector<int> v = {1, 2, 3, 4, 5};
//     print(v, v.size() - 1);
// }

// print values of the original vector in reverse order---


#include <bits/stdc++.h>
using namespace std;
void print(vector<int> &v, int i, int j)
{
    if (i > j)
    {
        return;
    }

    swap(v[i], v[j]);
    print(v, i + 1, j - 1);
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    print(v, 0, v.size() - 1);

    for (auto x : v)
    {
        cout << x << " ";
    }
}