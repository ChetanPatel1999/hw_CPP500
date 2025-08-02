#include <iostream>
using namespace std;
int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}
int main()
{
    cout << add(12, 45) << endl;

    int res;
    res = add(5, 8);
    cout << res;

    return 0;
}