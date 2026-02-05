//take input from user
#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<int> q;

    for(int i=1;i<=5;i++){
        int val;
        cout<<"Enter the value of val: ";
        cin>>val;
        q.push(val);
    }
    while (!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    
}