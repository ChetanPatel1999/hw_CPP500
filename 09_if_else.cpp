// wap to check given number in range (500,800) or not.
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter a num : ";
    cin >> num;
    if (num >= 500 && num <= 800)
    {
        cout << num << " is in range(500-800)";
    }
    else
    {
        cout << num << " is not in range(500-800)";
    }
    return 0;
}