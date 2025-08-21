#include <iostream>
using namespace std;
class demo
{
public:
    demo()
    {
        cout << "0 arg constructor is called" << endl;
    }
    demo(int a)
    {
        cout << "1 arg constructor is called" << endl;
    }
    demo(int a, int b)
    {
        cout << "sum = " << (a + b) << endl;
        cout << "2 arg constructor is called" << endl;
    }
    void display()
    {
        cout << "hi i am display" << endl;
    }
};
int main()
{
    demo d1(12), d2, d3(12, 34);
    d1.display();
    d2.display();
    return 0;
}