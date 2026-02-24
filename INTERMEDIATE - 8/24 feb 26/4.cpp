// count vowels

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello";
    int i = 0;
    int j = s.size() - 1;
    int count=0;
    for (auto x : s)
    {
        if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u') count++;
    }

    cout <<count;
}