// // count no of even values of vector using recursion

// #include <bits/stdc++.h>
// using namespace std;
// int checkeven(vector<int> v, int i, int &evencount)
// {

//     if (i == v.size())
//         return;
//     if (v[i] % 2 == 0)
//         evencount += 1;
//     checkeven(v, i + 1, evencount);
// }
// int main()
// {
//     vector<int> v = {1, 2, 3, 4, 5};
//     int evencount = 0;
//     checkeven(v, 0, evencount);
//     cout << evencount;
// }

// Count Number of Even Values of Vector.

#include <bits/stdc++.h>
using namespace std;
void countNum(vector<int> v, int &even, int i)
{

    if (i == v.size())
        return;
    if (v[i] % 2 == 0)
        even += 1;

    countNum(v, even, i + 1);
}

int main()
{

    vector<int> v = {10, 20, 30, 40, 55};
    int i = 0;
    int even = 0;
    countNum(v, even, i);
    cout << "Even Numbers = " << even;
}