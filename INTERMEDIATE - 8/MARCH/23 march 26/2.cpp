#include <bits/stdc++.h>
using namespace std;

class teacher
{
public:
    string name;
    string dept;
    int salary;
    int experience;

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
    }
    void printSalary(vector<int> storeSalary)
    {
        for (auto x : storeSalary)
        {
            cout << x << " ";
        }
    }
    void printExperience(vector<int> storeExperience)
    {
        for (auto x : storeExperience)
        {
            cout << x << " ";
        }
    }
};

int main()
{
    vector<string> storename;
    vector<string> storedept;
    vector<int> storeSalary;
    vector<int> storeExperience;

    teacher t1;
    for (int i = 1; i <= 2; i++)
    {
        string n;
        string d;
        int s;
        int e;
        cout << "enter Teacher name ";
        cin >> n;
        cout << "enter Department name ";
        cin >> d;
        cout << "enter Salary ";
        cin >> s;
        cout << "enter Experience ";
        cin >> e;

        storename.push_back(n);
        storedept.push_back(d);
        storeSalary.push_back(s);
        storeExperience.push_back(e);

        t1.name = n;
        t1.dept = d;
        t1.salary = s;
        t1.experience = s;
    }
    t1.printname(storename);
    t1.printdept(storedept);
    t1.printSalary(storeSalary);
    t1.printExperience(storeExperience);
}
