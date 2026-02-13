//count no of odd values of vector using recursion

#include <bits/stdc++.h>
using namespace std;
void countNum(vector<int> v, int &odd, int i){

        if( i == v.size()) return;
        if(v[i] % 2 != 0 ) odd += 1 ;

        countNum(v, odd, i+1) ;
}

int main()
{

    vector <int> v = {10, 20, 30, 40, 55,33} ;
    int i = 0 ;
    int odd = 0 ;
    countNum(v, odd, i) ;
    cout << "Even Numbers = " << odd ;

}