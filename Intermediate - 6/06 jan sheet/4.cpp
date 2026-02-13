#include<bits/stdc++.h>
using namespace std;

// question 4
void evenodd(int a){
    if(a%2==0){
        cout<<"even";
    }else{
        cout<<"odd";
    }
}
int main(){
    int a;
    cout<<"enter the value of a";
    cin>>a;
    evenodd(a);
}