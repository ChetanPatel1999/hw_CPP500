#include <iostream>
using namespace std;
void add(int a, int b)
{
    cout << "sum = " << (a + b) << endl;
}
void add(string a, string b)
{
    cout << "full name = " << (a + " " + b) << endl;
}
void add(int a, int b, int c)
{
    cout << "sum = " << (a + b + c) << endl;
}
void add(int a, int b, int c, int d)
{
    cout << "sum = " << (a + b + c + d) << endl;
}
void add(double a, int b)
{
    cout << "sumdi = " << (a + b) << endl;
}
void add(int a, double b)
{
    cout << "sumid = " << (a + b) << endl;
}
int main()
{
    add(4.5, 8);
    add(4, 8.9);
    add(6, 10);
    add(4, 6, 3);
    add(4, 6, 3, 8);
    add("ram", "sharma");
    return 0;
}