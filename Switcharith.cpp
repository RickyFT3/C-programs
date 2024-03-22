#include<iostream>
using namespace std;
int main()
{
    int a,b,s;
    char ch;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "Press + for addition\n";
    cout << "Press - for subtraction\n";
    cout << "Press * for multiplication\n";
    cout << "Press / for division\n";
    cout << "Press % for finding the remainder\n";
    cout << "Enter your choice: ";
    cin >> ch;
    switch(ch)
    {
        case '+' : cout << "Sum=" << a+b;
                   break;
        case '-' : cout << "Difference=" << a-b;
                   break;
        case '*' : cout << "Product=" << a*b;
                   break;
        case '/' : cout << "Quotient=" << a/b;
                   break;
        case '%' : cout << "Remainder=" << a%b;
                   break;
        default : cout << "Invalid choice";             
    }
    return 0;
}