#include <bits/stdc++.h>
using namespace std;
void even(int i, int n)
{
    if (i > n)
    {
        return;
    }
    if (i % 2 == 0)
    {
        cout << i << " ";
    }
    even(i + 1, n);
}
int main()
{
    int n = 4;
    int i = 1;

    even(i, n);
}