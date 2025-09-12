#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter dynamic array size : ";
    cin >> n;
    int *ptr = new int[n];
    int *temp = ptr;
    int i;
    printf("enter array element : ");
    for (i = 0; i < n; i++)
    {
        cin >> *ptr;
        ptr++;
    }
    ptr = temp;
    cout << "display array element : ";
    for (i = 0; i < n; i++)
    {
        cout << *ptr << " ";
        ptr++;
    }
    ptr = temp;
    delete ptr;
    return 0;
}