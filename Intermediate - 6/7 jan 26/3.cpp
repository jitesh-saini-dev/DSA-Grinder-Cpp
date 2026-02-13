#include <bits/stdc++.h>
using namespace std;

int main()
{
    int customers;
    cout << "Enter number of customers: ";
    cin >> customers;

    for (int i = 1; i <= customers; i++)
    {
        string name;
        int units;
        int charges = 0;

        cout << "\nEnter customer name: ";
        cin >> name;

        cout << "Enter number of units consumed: ";
        cin >> units;

        if (units <= 100)
        {
            charges = units * 5;
        }
        else if (units <= 300)
        {
            charges = (100 * 5) + (units - 100) * 7;
        }
        else
        {
            charges = (100 * 5) + (200 * 7) + (units - 300) * 10;
        }

        // surcharge
        if (charges > 2000)
        {
            charges += charges * 0.05;
        }

        cout << "Customer: " << name
             << ", Units: " << units
             << ", Total Bill: ₹" << charges << endl;
    }

    return 0;
}
