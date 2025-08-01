#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter array size :- ";
    cin >> n;
    int a[n];
    int i;
    cout << "enter array elements : ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "array elements are : " << endl;
    for (i = 0; i < n; i++) // 1
    {
        cout << a[i] << " ";
    }
}