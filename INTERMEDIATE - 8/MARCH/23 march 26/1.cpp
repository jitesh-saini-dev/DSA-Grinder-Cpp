#include <bits/stdc++.h>
using namespace std;

class teacher
{
public:
    string name;
    string dept;

    void printname(vector<string> storename)
    {
        for (auto x : storename)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    void printdept(vector<string> storedept)
    {
        for (auto x : storedept)
        {
            cout << x << " ";
        }
        cout << endl;
    }
};

int main()
{
    vector<string> storename;
    vector<string> storedept;

    teacher t1;

    for (int i = 1; i <= 2; i++)
    {

        string n;
        string d;

        cout << "enter name: ";
        cin >> n;

        cout << "enter dept: ";
        cin >> d;

        storename.push_back(n);
        storedept.push_back(d);

        t1.name = n;
        t1.dept = d;
    }

    t1.printname(storename);
    t1.printdept(storedept);

    return 0;
}