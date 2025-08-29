#include <iostream>
using namespace std;
class addition
{
public:
    void add(int a, int b)
    {
        cout << "sum = " << (a + b) << endl;
        }
};
class subtraction
{
public:
    void sub(int a, int b)
    {
        cout << "sub = " << (a - b) << endl;
    }
};
class multiplication
{
public:
    void mul(int a, int b)
    {
        cout << "mul = " << (a * b) << endl;
    }
};

class calculator : public addition, public subtraction, public multiplication
{
public:
    void all_operation(int a, int b)
    {
        add(a, b);
        sub(a, b);
        mul(a, b);
    }
};
int main()
{
    calculator c1;
    c1.add(12, 8);
    c1.sub(8, 4);
    c1.mul(4, 5);
    c1.all_operation(5, 3);
    return 0;
}