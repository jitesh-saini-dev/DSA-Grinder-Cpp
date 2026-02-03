// 4. Convert lowercase to uppercase and uppercase to lowercase


#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "ManGoeS";

     for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z') {
            s[i]+=32;
        }
        else if(s[i]>='a' && s[i]<='z'){
            s[i]-=32;
        }
    }
    cout<<s;
   
}
