// public visibility mode
#include <iostream>
using namespace std;
class base
{
public:
    int a;

protected:
    int b;

private:
    int c;
};
class derived : protected base
{
public:
    void display()
    {
        cout << "a= " << a << endl;
        cout << "b = " << b << endl;
        cout << "c= " << c << endl; //not inherite
    }
};
class secondDerived : public derived
{
public:
    void show()
    {
        cout << "b = " << b << endl;
        cout << "a = " << a << endl;
    }
};
int main()
{
    derived d1;
    d1.a = 12;
    d1.b = 89;
    d1.c = 59;
    return 0;
}