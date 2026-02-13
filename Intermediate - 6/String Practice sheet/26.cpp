// 26. Count number of spaces in a string


#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "I love mango and apple";
    int count = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
            count++;
    }

    cout << count;
}


