#include <iostream>
using namespace std;
class base // abstract class
{
public:
    virtual void display(int a) = 0; // pure virtual function
    virtual int result(int per) = 0; // pure virtual function
    void show()
    {
        cout << "hi i am show" << endl;
    }
};

class derieved : public base
{
public:
    void display(int a)
    {
        cout << "hi i am display" << endl;
        cout << "value of a  =" << a << endl;
    }
    int result(int a)
    {
        if (a > 33)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int main()
{
    // base b1; // we cant make object of base class
    base *b1;
    derieved d1;
    d1.show();
    d1.display(77);
    cout << d1.result(56);
    return 0;
}