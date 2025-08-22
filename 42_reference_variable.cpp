#include <iostream>
using namespace std;
int main()
{
    int a = 12;
    int &b = a; // b  is reference variable
    cout << (&a) << endl;
    cout << (&b) << endl;
    cout << a << endl; // 12
    cout << b << endl; // 12
    a = 900;
    cout << a << endl; // 900
    cout << b << endl; // 900
    return 0;
}