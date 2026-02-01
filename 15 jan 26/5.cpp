
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1 = {2, 3, 4, 5, 6, 7};
    vector<int> v2 = {13, 15, 4, 5, 6, 70};
    set<int>s;

    for(auto x:v1){
        s.insert(x);
    }
  for(auto x:v2){
        s.insert(x);
    }
      for(auto x:s){
        cout<<x<<" ";
    }

}