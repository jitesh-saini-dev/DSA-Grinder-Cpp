// 6. Write a function to swap two numbers using call by value.

#include <iostream>
using namespace std;
// function to swap two numbers
void swapNumbers(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Inside swapNumbers function: " << endl;
    cout << "a = " << a << ", b = " << b << endl;
}
int main()
{
    int a, b;
    cout << "Enter two numbers to swap: ";
    cin >> a >> b;

    cout << "Before swapping in main: " << endl;
    cout << "a = " << a << ", b = " << b << endl;

    swapNumbers(a, b);

    cout << "After calling swapNumbers in main: " << endl;

    // main values remain unchanged quki call by value h
    // main me change krne ke liye call by reference krna pdta h

    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}