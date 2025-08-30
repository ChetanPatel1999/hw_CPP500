// virtual base class concept
// this proble is called diomond probelm
#include <iostream>
using namespace std;
class base
{
public:
    void display()
    {
        cout << "hi i am display" << endl;
    }
};
class derieved1 : virtual public base
{
public:
    void d1()
    {
        cout << "hi i am derived 1" << endl;
    }
};
class derieved2 : virtual public base
{
public:
    void d2()
    {
        cout << "hi i am derived 2" << endl;
    }
};

class derieved3 : public derieved1, public derieved2
{
};
int main()
{
    derieved3 d1;
    d1.display();
    d1.d1();
    d1.d2();
    return 0;
}