// wap to check given number is positive ,nagative,zero.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a num : ";
    cin >> num;
    if (num == 0)
    {
        cout << "num is zero";
    }
    else if (num > 0)
    {
        cout << "num is positive";
    }
    else
    {
        cout << "num is nagative";
    }
    return 0;
}