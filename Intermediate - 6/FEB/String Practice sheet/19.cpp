// 19. Remove all special characters from a string

#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "ma@dio#12$m!";
    string ans = "";

    for (int i = 0; i < s.length(); i++)
    {
        if ((s[i] >= 'a' && s[i] <= 'z') ||
            (s[i] >= 'A' && s[i] <= 'Z') ||
            (s[i] >= '0' && s[i] <= '9'))
        {
            ans += s[i];
        }
    }

    cout << ans;
}
