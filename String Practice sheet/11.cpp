// 11. Count only vowels in a string

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "madioam";
    int vowel = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            vowel++;
    }
    cout << vowel;
}
