// count both even + odd values of vector using recursion

#include <bits/stdc++.h>
using namespace std;

void countEvenOdd(vector<int>& v, int i, int &even, int &odd) {
    if (i == v.size()) return;

    if (v[i] % 2 == 0)
        even++;
    else
        odd++;

    // recursive call
    countEvenOdd(v, i + 1, even, odd);
}

int main() {
    vector<int> v = {1, 2, 3,3, 4, 5, 6};
    int even = 0, odd = 0;

    countEvenOdd(v, 0, even, odd);

    cout << "Even count = " << even << endl;
    cout << "Odd count  = " << odd << endl;
}
