// 10. Write a function to reverse a given number.

#include <iostream>
using namespace std;

// function to reverse a given number

int reverseNumber(int n)
{
    int reversedNum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        reversedNum = reversedNum * 10 + digit;
        n = n / 10;
    }
    return reversedNum;
}