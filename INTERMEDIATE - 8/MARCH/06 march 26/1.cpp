// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     vector<int> v = {1, 2, 3, 4};

//     int i = 0;
//     int j = 1;

//     while (j < v.size())
//     {
//         v[j] = v[i] + v[j];
//         i++;
//         j++;
//     }

//     for (auto x : v)
//     {
//         cout << x << " ";
//     }
// }

// another way to do it-------------------------------------------

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4};

    for (int i = 1; i < v.size(); i++)
    {
        v[i] = v[i] + v[i - 1];
    }

    for (auto x : v)
    {
        cout << x << " ";
    }
}