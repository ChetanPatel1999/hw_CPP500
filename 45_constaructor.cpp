#include <iostream>
using namespace std;
class number
{
    int num1;
    int num2;

public:
    number() // non parameterized constructor
    {
        num1 = 40;
        num2 = 80;
    }
    number(int a, int b) // parameterized constructor
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
    number n1, n2, n3(12, 5);
    n1.display();
    n2.display();
    n3.display();
    return 0;
}