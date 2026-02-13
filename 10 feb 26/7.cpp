// count even values of a given no.(3829) ki yha pe 8 or 2 even h toh count = 2;

// count even values of a given number using recursion
// example: 3829 → even digits = 8, 2 → count = 2

#include <bits/stdc++.h>
using namespace std;

int countEvenDigits(int n) {
    if (n == 0) return 0;

    int digit = n % 10;

    return (digit % 2 == 0 ? 1 : 0) + countEvenDigits(n / 10);
}

int main() {
    int num = 3829;
    cout << countEvenDigits(num);  // output: 2
}
