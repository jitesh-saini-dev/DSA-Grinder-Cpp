#include<iostream>
using namespace std;

// question 2
int add(int a,int b){
    return max(a,b);
}
int main(){
    int a;
    cout<<"enter the value of a";
    cin>>a;
    int b;
    cout<<"enter the value of b";
    cin>>b;
    cout<<add(a,b);
}