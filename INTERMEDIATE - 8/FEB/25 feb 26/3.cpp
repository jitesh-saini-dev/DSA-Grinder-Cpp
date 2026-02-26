// count the number of words in a string

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "        cat      dog    modi     hlo";
    int count = 0;
    int word = 0;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
            word++;
        else if (word != 0)
        {
            count++;
            word = 0;
        }
    }
    if (word != 0)
        count++;
    cout << count;
}