// Q3.
// Function takes two string vectors and returns the total number of vowels appearing in all strings
// combined.
// In main(), print: "Total vowels: " followed by the returned value.

#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        return true;
    return false;
}

int countVowels(vector<string> &v1, vector<string> &v2)
{
    int count = 0;

    for (string s : v1)
    {
        for (char c : s)
        {
            if (isVowel(c))
                count++;
        }
    }

    for (string s : v2)
    {
        for (char c : s)
        {
            if (isVowel(c))
                count++;
        }
    }

    return count;
}

int main()
{
    vector<string> v1 = {"hello", "world"};
    vector<string> v2 = {"apple", "orange"};

    cout << "Total vowels: " << countVowels(v1, v2);
    return 0;
}

//---------char k liye ye hojyga-----------

// #include <bits/stdc++.h>
// using namespace std;
// int Vowel(vector<char> v1, vector<char> v2)
// {
//     int count1 = 0, count2 = 0;
//     for (auto x : v1)
//     {
//         if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
//         {
//             count1++;
//         }
//     }
//     for (auto x : v2)
//     {
//         if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
//         {
//             count2++;
//         }
//     }
//     return count1 + count2;
// }

// int main()
// {
//     vector<char> v1 = {'a', 'p', 'p', 'l', 'e'};
//     vector<char> v2 = {'m', 'a', 'i', 'g', 'o'};
//     cout << "Total vowels: " << Vowel(v1, v2);
// }
