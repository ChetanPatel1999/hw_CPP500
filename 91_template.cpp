// default parameter set in template
#include <iostream>
using namespace std;
template <class T1 = float, class T2 = char>
class data
{
    T1 data1;
    T2 data2;

public:
    data(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << "data1 : " << data1 << endl;
        cout << "data2 : " << data2 << endl;
        cout << "-------------------------------" << endl;
    }
};
int main()
{
    data<int, int> d1(12, 78);
    d1.display();
    data<int, float> d2(45, 89.78);
    d2.display();
    data<string, int> d3("home", 128);
    d3.display();
    data<> d4(4.78, 'P');
    d4.display();
    data<char> d5('h', 'k');
    d5.display();
    return 0;
}