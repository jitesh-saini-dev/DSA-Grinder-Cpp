// 8. Write a function to print the table of a given number.

#include <iostream>
using namespace std;
// function to print the table of a given number
void printTable(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}
int main()
{
    int n;
    cout << "Enter a number to print its table: ";
    cin >> n;

    printTable(n);

    return 0;
}