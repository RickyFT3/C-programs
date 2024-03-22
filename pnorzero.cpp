#include<iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if(n>0)
    {
        cout << n << " is a positive number";
    }
    if(n<0)
    {
        cout << n << " is a negative number";
    }
    if(n==0)
    {
        cout << n << " is zero";
    }
    return 0;
}