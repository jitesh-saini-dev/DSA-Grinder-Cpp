// 11 Print Fibonacci series till N terms using recursion

#include <bits/stdc++.h>
using namespace std;
int fibonacci(int a,int b)
{
    if(a==0 && b==1) return;

    int c=a+b;
    a=b;
    b=c;
    return fibonacci(a,b);

}
int main()
{
   int a=0,b=1;
   cout<< fibonacci(a,b);
}