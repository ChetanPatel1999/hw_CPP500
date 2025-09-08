// friend function in cpp
#include <iostream>
using namespace std;
class data;
class other
{
public:
    void disp1(data);
    void disp2(data);
};
class data
{
    int num1;
    int num2;

public:
    friend class other;
    void setData(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
};
void other::disp1(data obj)
{
    cout << "num1 = " << obj.num1 << endl;
}
void other::disp2(data obj)
{
    cout << "num2 = " << obj.num2 << endl;
}
int main()
{
    data o1;
    o1.setData(12, 78);
    other o2;
    o2.disp1(o1);
    o2.disp2(o1);
    return 0;
}