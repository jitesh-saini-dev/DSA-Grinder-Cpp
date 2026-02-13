// 11 Find the maximum product of two elements in an array.

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={1,2,3,4,5,6};
    int lar = INT_MIN;
    int seclar = INT_MIN;
    for(auto x:v){
        if(x>lar){
            seclar=lar;
            lar=x;
        }
        else if(x<lar && x>seclar){
            seclar=x;
        }
    }
    cout<<"The maximum product of two elements in an array: "<<seclar*lar;
}