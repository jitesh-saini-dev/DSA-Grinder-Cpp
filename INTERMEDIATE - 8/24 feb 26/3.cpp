// pallindrome or not
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "Hello";
    int i = 0;
    int j = s.size() - 1;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            cout << "not palindrome" << endl;
            return 0;
        }
        i++;
        j--;
    }

    cout << "Palindrome";
}