#include <iostream>
using namespace std;
template <class T>
class data
{
    T data1;
    T data2;

public:
    data(T a, T b)
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
    data<int> d1(12, 78);
    d1.display();
    data<int> d2(45, 89);
    d2.display();
    data<string> d3("home", "pen");
    d3.display();
    data<float> d4(4.78, 8.23);
    d4.display();
    data<char> d5('h', 'k');
    d5.display();
    return 0;
}