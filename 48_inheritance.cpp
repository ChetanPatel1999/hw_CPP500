#include <iostream>
using namespace std;
class A
{
public:
    void m1()
    {
        cout << "class A m1 is called" << endl;
    }
    void m2()
    {
        cout << "class A m2 is called" << endl;
    }
};

class B : public A
{
public:
    void m3()
    {
        cout << "class B m3 is called" << endl;
    }
    void m4()
    {
        cout << "class B m4 is called" << endl;
    }
};
int main()
{
    A a1;
    a1.m1();
    a1.m2();
    cout << "-------------------------------------" << endl;
    B b1;
    b1.m1();
    b1.m2();
    b1.m3();
    b1.m4();
    return 0;
}