#include <bits/stdc++.h>
using namespace std;

string user(string a)
{
    return a;
}
int main()
{
    string name;
    cout << "Enter a name: ";
    cin >> name;
    cout << user(name);
}