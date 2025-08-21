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
    void setData(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    void display()
    {
        cout << "num1 = " << num1 << endl;
        cout << "num2 = " << num2 << endl;
    }
};
int main()
{
    number n1(12, 45), n2(4, 6), n3;
    n3.setData(30, 60);
    n1.display();
    n2.display();
    n3.display();
    return 0;
}