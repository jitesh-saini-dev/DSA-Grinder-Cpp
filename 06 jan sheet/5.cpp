#include<bits/stdc++.h>
using namespace std;

// question 5
int factorial(int a){
    int ans=1;
    for(int i=1;i<=a;i++){
        ans=ans*i;
    }
    return ans;
}
int main(){
    int a;
    cout<<"enter the value of a";
    cin>>a;
    cout<<factorial(a);
}