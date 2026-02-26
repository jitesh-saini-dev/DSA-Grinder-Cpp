#include <bits/stdc++.h>
using namespace std;

int main()
{
        map<char,int>m;
        for(auto x:s){
            m[x]++;
        }
        for(int i=0;i<m.size();i++){
            if(m[i].second==1){
                return i;
                break;
            }
        }
        return -1;
    }
};