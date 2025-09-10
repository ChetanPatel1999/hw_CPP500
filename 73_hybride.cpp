// virtual base class concept
// this proble is called diomond probelm
#include <iostream>
using namespace std;
class base
{
public:
    base() {}
    base(int a, int b)
    {
        cout << "2 arg constructor is called" << endl;
    }
    base(int a)
    {
        cout << "1 arg constructor is called" << endl;
    }
    void display()
    {
        cout << "hi i am display" << endl;
    }
};
class derieved1 : virtual public base
{
public:
    derieved1()
    {
        cout << "d1 constructor is called" << endl;
    }
    void d1()
    {
        cout << "hi i am derived 1" << endl;
    }
};
class derieved2 : virtual public base
{
public:
    derieved2()
    {
        cout << "d2constructor is called" << endl;
    }
    derieved2(int a)
    {
        cout << "d2  1 constructor is called" << endl;
    }
    void d2()
    {
        cout << "hi i am derived 2" << endl;
    }
};

class derieved3 : public derieved1, public derieved2
{
public:
    derieved3() : base(12),derieved2(45)
    {
        cout << "d3 constructor is called" << endl;
    }
};
int main()
{
    derieved3 d1;
    // d1.display();
    // d1.d1();
    // d1.d2();
    return 0;
}