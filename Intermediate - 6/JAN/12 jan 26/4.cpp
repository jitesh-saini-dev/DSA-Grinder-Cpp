// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>v = {1,2,1,3,2,4,5,6,7};
//     set<int>s;
//     for(auto x:v){
//         s.insert(x);
//     }
//     for(auto x:s){
//         cout<<x<<" ";
//     }
// }

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 1, 3, 2, 4, 5, 6, 7};
    map<int, int> m;
    for (auto x : v)
    {
        m[x]++;
    }
    for (auto x : m)
    {
        cout << x.first << endl;
    }
}