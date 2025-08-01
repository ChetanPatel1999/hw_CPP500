#include <iostream>
using namespace std;
int main()
{
    int a[8] = {12, 34, 56, 78, 90, 66, 32, 45};
    int i;
    cout << "array elements are : " << endl;
    for (i = 0; i < 8; i++) // 1
    {
        cout << a[i] << " ";
    }
    a[4] = 500;
    cout << "\narray elements are : " << endl;
    for (i = 0; i < 8; i++) // 1
    {
        cout << a[i] << " ";
    }
}