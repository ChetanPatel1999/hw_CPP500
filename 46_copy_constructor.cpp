#include <iostream>
using namespace std;
class number
{
    int num1;
    int num2;

public:
    number() {}
    number(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    // copy constructor
    number(number &obj)
    {
        cout << "copy constructor is called" << endl;
        num1 = obj.num1 + 5;
        num2 = obj.num2 + 5;
    }
    void display()
    {
        cout << "num1 = " << num1 << endl;
        cout << "num2 = " << num2 << endl;
        cout << "--------------------------" << endl;
    }
};
int main()
{
    number n1(12, 5), n2 = n1, n3; //  user copy constructor is called
    n3 = n1;                       // default copy constructor is called
    n1.display();
    n2.display();
    n3.display();
    return 0;
}