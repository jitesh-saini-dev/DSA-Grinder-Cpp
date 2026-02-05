#include <bits/stdc++.h>
using namespace std;
int main (){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.pop();//remove element from first.
    cout<<q.front();
    q.push(4);
    cout<<q.back();
    cout<<q.size();

}