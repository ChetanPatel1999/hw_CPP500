// friend function in cpp
#include <iostream>
using namespace std;
class data
{
    int num1;
    int num2;
    friend void display(data);

public:
    void setData(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
};

void display(data obj)
{
    cout << " num1 = " << obj.num1 << endl;
    cout << " num2 = " << obj.num2 << endl;
}
int main()
{
    data o1;
    o1.setData(12, 78);
    display(o1);
    return 0;
}