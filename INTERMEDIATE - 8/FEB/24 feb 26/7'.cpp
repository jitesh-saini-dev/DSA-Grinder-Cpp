//count freqauency of each character


#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "aaapplleee";
    map<char, int> m;
    for (auto x : s)    {
        m[x]++;
    }
    for (auto x : m)
    {
        cout << x.first << "=>" << x.second << endl;
    }
}