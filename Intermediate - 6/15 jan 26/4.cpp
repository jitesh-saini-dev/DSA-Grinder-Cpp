// 9 Find the intersection of two arrays.

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v1 = {2, 3, 4, 5, 6, 7};
//     vector<int> v2 = {13, 15, 4, 5, 6, 70};
//     vector<int> ans;
//     map<int, int> m;

//     for (auto x : v1)
//     {
//         ans.push_back(x);
//     }
//     for (auto x : v2)
//     {
//         ans.push_back(x);
//     }
//     for (auto x : ans)
//     {
//         m[x]++;
//     }
//     for (auto x : m)
//     {
//         if (x.second >= 2)
//         {
//             cout << x.first << " ";
//         }
//     }
// }


#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v1 = {2, 3, 4, 5, 6, 7};
    vector<int> v2 = {13, 15, 4, 5, 6, 70};
  

    for (int i=0;i<v1.size();i++){
        for(int j=0;j<v2.size();j++){
            if(v1[i]==v2[j]){
                cout<<v1[i]<<" ";
            }
        }
    }

}