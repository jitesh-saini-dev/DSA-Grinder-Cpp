// 9. Write a function to calculate the area of a circle. (Formula: Area = π × r × r)

#include <iostream>
using namespace std;
// function to calculate area of a circle
int areaOfCircle(int r)
{
    const float pi = 3.14;
    float area = pi * r * r;
    return area;
}
int main()
{
    int r;
    cout << "Enter the radius of the circle: ";
    cin >> r;

    cout << "Area of the circle: " << areaOfCircle(r);

    return 0;
}