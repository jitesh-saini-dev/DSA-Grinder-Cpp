
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {

//     vector<vector<int>> v = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
//     int row = v.size();
//     int col = v[0].size();
//     int target = 6;
//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col; j++)
//         {
//             if (v[i][j] == target)
//             {
//                 cout << i << ", " << j;
//             }
//         }
//         cout << endl;
//     }
// }


//-------------sir give code in class chat----------
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<vector<int>>v={{9,8,7},{89,76,34},{90,12,75}};
    int row=v.size();
    int col=v[0].size();
    int target=100000;
    for(int i=0;i<row;i++){
        // int largest=0;
        for(int j=0;j<col;j++){
            if(v[i][j]==target){
                cout<<"true";
                return 0;
            }
        }
    }
    cout<<"false";
}