#include <iostream>
using namespace std;
int main()
{
    int r,d;
    float c,a;
    cout << "Enter the radius of the circle: ";
    cin >> r;
    d=2*r;
    c=2*3.14*r;
    a=3.14*r*r;
    cout << d << " is the diameter of the circle\n";
    cout << c << " is the circumference of the circle\n";
    cout << a << " is the area of the cirlce";
    return 0;
}