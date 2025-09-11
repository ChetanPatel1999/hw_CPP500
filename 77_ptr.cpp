#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    int *ptr, i;
    ptr = arr; //&arr[0]
    printf("enter array elements : ");
    for (i = 0; i < 5; i++)
    {
        cin >> *(ptr + i);
    }
    printf("array element are : ");
    for (i = 0; i < 5; i++)
    {
        cout << *(ptr + i) << " ";
    }
    return 0;
}