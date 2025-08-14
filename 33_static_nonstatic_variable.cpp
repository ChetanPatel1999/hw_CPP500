#include <iostream>
using namespace std;
class demo
{
    int var1; // non static
    int var2; // non static
    static int var3;// static
    static int var4;// static

public:
    void sedData(int a, int b, int c, int d)
    {
        var1 = a;
        var2 = b;
        var3 = c;
        var4 = d;
    }
    void getData()
    {
        cout << "var1 , var2 = " << var1 << " , " << var2 << endl;
        cout << "var3 , var4 = " << var3 << " , " << var4 << endl;
        cout << "---------------------------------------------" << endl;
    }
};
int demo::var3;
int demo::var4;
int main()
{
    demo d1, d2, d3;
    d1.sedData(12, 13, 100, 200);
    d2.sedData(14, 15, 300, 400);
    d3.sedData(16, 17, 500, 600);

    d1.getData();
    d2.getData();
    d3.getData();
    return 0;
}