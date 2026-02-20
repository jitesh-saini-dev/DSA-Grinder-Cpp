// Write a C++ program to search for a target element in an array.


#include <bits/stdc++.h>
using namespace std;
int main() {

	vector<int>v = {3,8,6,4,7};
	
	int target=6;


	for(int i=0;i<5;i++){
	    
	    if(v[i]==target){
	        cout<<"found at index:"<<i;
	        return 0;
	    }
	    
	}
	cout<<"Not found";
}
