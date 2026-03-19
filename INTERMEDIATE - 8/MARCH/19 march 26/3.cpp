#include <bits/stdc++.h>
using namespace std;

void sorted(vector<int>& v, int i)
{
    if (i == v.size() - 1) {  
        cout << "true";
        return;
    }

    if (v[i] > v[i + 1]) {     
        cout << "false";
        return;
    }

    sorted(v, i + 1);         
}

int main()
{
    vector<int> v = {1, 2, 3, 5};
    sorted(v, 0);
}