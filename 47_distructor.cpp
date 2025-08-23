#include <iostream>
using namespace std;
class demo
{
public:
    demo()
    {
        cout << "constructor is called" << endl;
    }
    ~demo()
    {
        cout << "destructor is called" << endl;
    }
    void display()
    {
        cout << "hi i am display" << endl;
    }
};
int main()
{
    demo d1, d2;
    cout << "inside main function" << endl;
    {
        demo d3;
        d3.display();
    }
    d1.display();
    cout << "thik hai bhahot ho gya" << endl;
    return 0;
}