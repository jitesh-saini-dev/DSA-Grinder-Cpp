#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    string course;
    int fees;
    int duration;

    void changename(string updatename)
    {
        name = updatename;
    }
    void changecourse(string updatecourse)
    {
        course = updatecourse;
    }

    void printname(vector<string> storename)
    {
        for (auto x : storename)
        {
            cout << x << " ";
        }
    }
    void printcourse(vector<string> storecourse)
    {
        for (auto x : storecourse)
        {
            cout << x << " ";
        }
    }
    void printfees(vector<int> storefees)
    {
        for (auto x : storefees)
        {
            cout << x << " ";
        }
    }
    void printduration(vector<int> storeduration)
    {
        for (auto x : storeduration)
        {
            cout << x << " ";
        }
    }

    // void printdetails(vector<string> storename,
    //                   vector<string> storecourse,
    //                   vector<int> storefees,
    //                   vector<int> storeduration)
    // {
    //     cout << "Student details: ";
    //     cout << name << endl;
    //     cout << course << endl;
    //     cout << fees << endl;
    //     cout << duration << endl;
    // }
};

int main()
{
    Student s;

    vector<string> storename;
    vector<string> storecourse;
    vector<int> storefees;
    vector<int> storeduration;

    for (int i = 1; i <= 2; i++)
    {
        string n;
        string c;
        int f;
        int d;
        cout << "enter student name ";
        cin >> n;
        cout << "enter course name ";
        cin >> c;
        cout << "enter fee ";
        cin >> f;
        cout << "enter duration ";
        cin >> d;

        storename.push_back(n);
        storecourse.push_back(c);
        storefees.push_back(f);
        storeduration.push_back(d);

        s.name = n;
        s.course = c;
        s.fees = f;
        s.duration = d;
    }

    // s.printdetails(storename, storecourse, storefees, storeduration);
    s.printname(storename);
    s.printcourse(storecourse);
    s.printfees(storefees);
    s.printduration(storeduration);
}