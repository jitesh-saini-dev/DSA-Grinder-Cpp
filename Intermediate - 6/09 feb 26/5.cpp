// print -1 in each values of the vector---
// #include <bits/stdc++.h>
// using namespace std;
// void Print(vector<int> v, int i)
// {

//     if (i == v.size())
//     {
//         return;
//     }
//     v[i] = -1;
//     cout << v[i] << " ";
//     Print(v, i + 1);
// }
// int main()
// {
//     vector<int> v = {1, 2, 3, 4, 5};
//     Print(v, 0);
// }

#include <bits/stdc++.h>
using namespace std;
void Print(vector<int> &v, int i)
{
    if (i == v.size())
        return;

    v[i] = -1;
    Print(v, i + 1);
}
int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    Print(v, 0);

    for (int x : v)
        cout << x << " ";
}
