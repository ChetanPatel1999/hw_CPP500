#include <iostream>
using namespace std;
class number
{
    int num1;
    int num2;

public:
    number(int a = 90, int b = 70) // default constructor
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
    number n1(12, 45), n2(4, 6), n3(6), n4;
    n1.display();
    n2.display();
    n3.display();
    n4.display();
    return 0;
}