#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter a  : ";
    cin >> a;
    cout << "enter b  : ";
    cin >> b;
    try
    {
        if (b == 0)
        {
            throw b;
        }
        c = a / b;
        cout << "division result: " << c << endl;
        cout << "division programm run succecfully" << endl;
    }
    catch (int x)
    {
        cout << "Zero division error " << endl;
        cout << "value of b = " << x << endl;
    }
    cout << "this is addition program : " << endl;
    cout << "enter a  : ";
    cin >> a;
    cout << "enter b  : ";
    cin >> b;
    c = a + b;
    cout << "addition result: " << c << endl;
    cout << "programm run succecfully" << endl;
    return 0;
}