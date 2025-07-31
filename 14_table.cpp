#include <iostream>
using namespace std;
int main()
{
    int i, num;
    cout << "enter a num : ";
    cin >> num; // 6
    for (i = 1; i <= 10; i++)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }
    return 0;
}