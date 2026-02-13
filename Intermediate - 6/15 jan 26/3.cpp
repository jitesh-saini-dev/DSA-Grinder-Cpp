// 8 Count the number of pairs with a given sum.

#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>v = {2,4,6,9,5,3};

    int target = 11;
    int i=0,j=v.size();
    int count=0;
    sort(v.begin(),v.end());
    while(i<j){
        int sum = v[i]+v[j];

        if(sum==target) count++;
        else if(sum>target) j--;
        else i++;
    }
    cout<<"total pairs are: "<<count;
}