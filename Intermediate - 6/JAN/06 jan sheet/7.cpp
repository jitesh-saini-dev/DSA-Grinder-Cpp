// 7. Write a function to calculate the simple interest. (Formula: SI = (P × R × T) / 100)

#include <iostream>
using namespace std;
// function to calculate simple interest

int simpleInterest(int P, int R, int T)
{
    int SI = (P * R * T) / 100;
    return SI;
}
int main()
{
    int P, R, T;
    cout << "Enter Principal amount (P): ";
    cin >> P;
    cout << "Enter Rate of interest (R): ";
    cin >> R;
    cout << "Enter Time period in years (T): ";
    cin >> T;

    cout << simpleInterest(P, R, T);

    return 0;
}