#include <iostream>
using namespace std;
class addition
{
    int num1;
    int num2;

public:
    addition(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    void add()
    {
        cout << "sum = " << (num1 + num2) << endl;
    }
};
class subtraction
{
    int num3;
    int num4;

public:
    subtraction(int a, int b)
    {
        num3 = a;
        num4 = b;
    }
    void sub()
    {
        cout << "sum = " << (num3 - num4) << endl;
    }
};

class calculator : public addition, public subtraction
{
public:
    calculator(int a, int b, int c, int d) : addition(a, b), subtraction(c, d)
    {
    }
};
int main()
{
    calculator c1(3, 5, 6, 2);
    c1.add();
    c1.sub();
    return 0;
}