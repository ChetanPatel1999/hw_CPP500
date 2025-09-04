#include <iostream>
using namespace std;
class base
{
public:
    int a; // public
private:
    int b;

protected:
    int c;

public:
    void setdata(int x)
    {
        b = x;
    }
    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};
class child : public base
{
public:
    void show()
    {
        cout << "a = " << a << endl;
        // cout << "b = " << b << endl; // b is private
        cout << " c = " << c << endl;
    }
};
class other
{
public:
    void otherdisp()
    {
        base o1;
        o1.a = 99;
        // o1.b = 67; // b is private
        // o1.c = 67; // c is protected
        cout << "a = " << o1.a << endl;
        o1.display();
    }
};
int main()
{
    base b1;
    b1.a = 12;
    // b1.b = 45;  // not access private data
    // b1.c = 190; // c is protected
    b1.display();
    child c1;
    c1.a = 89;
    c1.show();
    other ot1;
    ot1.otherdisp();
    return 0;
}