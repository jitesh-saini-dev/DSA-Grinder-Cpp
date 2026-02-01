#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ridesnum;
    cout << "Enter no of rides: ";
    cin >> ridesnum;

    int totalfare = 0;
    int bikeCount = 0, autoCount = 0, cabCount = 0, deliveryCount = 0;

    for (int i = 1; i <= ridesnum; i++)
    {
        cout << "Enter ride from menu: " << endl;
        cout << "1.bike - 50/KM " << endl
             << "2.auto - 80/KM " << endl
             << "3.cab - 120/KM " << endl
             << "4.delivery - 60/KM " << endl;

        if (ridesnum <= 0)
        {
            cout << "Invalid number of rides. You have to enter at least 1. Please enter a positive value." << endl;
            return 0;
        }

        int rideno;
        cout << "Enter which ride you want: ";
        cin >> rideno;

        int distance;
        cout << "Enter distance in Kilometers: ";
        cin >> distance;

        if (distance <= 0)
        {
            cout << "Invalid distance. Please enter a positive value." << endl;
            return 0;
        }

        if (rideno >= 1 && rideno <= 4)
        {
            if (rideno == 1)
            {
                totalfare += distance * 50;
                bikeCount++;
            }
            else if (rideno == 2)
            {
                totalfare += distance * 80;
                autoCount++;
            }
            else if (rideno == 3)
            {
                totalfare += distance * 120;
                cabCount++;
            }
            else if (rideno == 4)
            {
                totalfare += distance * 60;
                deliveryCount++;
            }
        }
        else
        {
            cout << "Invalid ride number. Please select a valid option." << endl;
            return 0;
        }

        if (deliveryCount > 0 && bikeCount == 0 && autoCount == 0 && cabCount == 0)
        {
            cout << "15% Delivery discount applied\n";
            totalfare -= totalfare * 15 / 100;
        }
    }

    cout << "Total fare for all rides is: " << totalfare << endl;

    if (totalfare > 500)
    {
        cout << "You are eligible for a discount of 10%!" << endl;
        totalfare -= totalfare * 10 / 100;
        cout << "Final fare after discount (if applicable) is: " << totalfare << endl;
    }
    else if (totalfare < 200)
    {
        cout << "You have to pay a surcharge of 30rs!" << endl;
        totalfare += 30;
        cout << "Final fare after surcharge (if applicable) is: " << totalfare << endl;
    }
}