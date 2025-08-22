#include <iostream>
using namespace std;
void fun(int &a)
{
    cout << a << endl; // 18
    a = 67;
    cout << a << endl; // 67
}
int main()
{
    int n = 18;
    cout << n << endl; // 18
    fun(n);
    cout << n << endl; // 67
    return 0;
}