#include<iostream>
using namespace std;
int main()
{
    int n,r,s=0;
    cout << "Enter a number: ";
    cin >> n;
    do
    {
        r=n%10;
        s=s+r;
        n=n/10;
    }while(n!=0);
    cout << "Sum of digits=" << s;
    return 0;
}