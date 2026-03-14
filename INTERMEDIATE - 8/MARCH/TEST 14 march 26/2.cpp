// #include <iostream>
// using namespace std;

// int main()
// {
//     string s = "aaabccdaa";
//     string ans = "";

//     int i = 1;

//     while (i < s.size())
//     {
//         if (s[i - 1] == s[i])
//         {
//             i++;
//         }
//         else
//         {
//             ans += s[i - 1];
//             i++;               
//         }
//     }

//     ans += s[s.size()-1];     

//     cout << ans;
// } 

//---------------------------------------------------
#include <iostream>
using namespace std;

int main()
{
    string s = "aaabccdaa";
    string ans = "";

    for(int i = 0; i < s.size(); i++)
    {
        if(s[i] != s[i-1])
        {
            ans += s[i];
        }
    }

    cout << ans;
}