#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {-1, 2, -3, 4, -5, 6};

    int pos = 0;
    int neg = 0;

    for(auto x:v){
        if(x>0){
            pos++;
        }
        else neg++;
    }
    cout<<pos<<endl;
    cout<<neg;
}