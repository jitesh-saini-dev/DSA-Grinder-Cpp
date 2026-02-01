// find maximum value in each row and store it in a vector and print the vector

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int row = v.size();
//     int col = v[0].size();
//     vector<int> ans;

//     for (int i = 0; i < row; i++)
//     {
//         int largest = 0;
//         for (int j = 0; j < col; j++)
//         {
//             int value = v[i][j];

//             if (v[i][j] > largest)
//             {
//                 largest = value;
//             }
//         }
//         ans.push_back(largest);
//     }
//     for (auto x : ans)
//     {
//         cout << x << " ";
//     }
// }



//------------sir give code in class chat--------------
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>v={{9,8,7},{89,76,34},{90,12,75}};
    vector<int>ans;
    int row=v.size();
    int col=v[0].size();
    for(int i=0;i<row;i++){
        int largest=0;
        for(int j=0;j<col;j++){
            if(largest<v[i][j]){
                largest=v[i][j];
            }
        }
        ans.push_back(largest);
    }
    
    for(auto x:ans){
        cout<<x<<" ";
    }
}