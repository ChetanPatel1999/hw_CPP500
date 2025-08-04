#include <iostream>
using namespace std;
// with return type with parameter
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{
    cout << "sum = " << add(12, 45) << endl;

    int res;
    res = add(5, 8);
    cout << "sum = " << res;

    return 0;
}