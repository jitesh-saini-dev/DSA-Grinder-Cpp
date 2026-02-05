// check if a queue is palindrome or not

// check if a queue is palindrome or not using vector

#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(2);
    q.push(1);

    vector<int> v;

    // move queue to vector
    while (!q.empty())
    {
        v.push_back(q.front());
        q.pop();
    }

    bool isPalindrome = true;
    int i = 0, j = v.size() - 1;

    while (i < j)
    {
        if (v[i] != v[j])
        {
            isPalindrome = false;
            break;
        }
        i++;
        j--;
    }

    if (isPalindrome)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
