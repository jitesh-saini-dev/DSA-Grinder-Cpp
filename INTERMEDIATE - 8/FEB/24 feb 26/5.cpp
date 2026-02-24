// count vowels and consonant

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello";
    int i = 0;
    int j = s.size() - 1;
    int vowelcount=0,consocount=0;
    for (auto x : s)
    {
        if(x=='a'||x=='e'||x=='i'||x=='o'||x=='u') vowelcount++;
        else consocount++;
    }

    cout <<vowelcount<<endl;
    cout <<consocount<<endl;
    
}