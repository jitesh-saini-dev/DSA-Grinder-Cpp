// 23. Check if two strings have same length

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1 = "mango";
    string s2 = "apple";

    if (s1.length() == s2.length())
        cout << "Same length";
    else
        cout << "Different length";
}
