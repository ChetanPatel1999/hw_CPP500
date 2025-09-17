#include <iostream>
using namespace std;

template <class t>
void display(t a)
{
    cout << "data : " << a << endl;
}

template <class t1, class t2>
float average(t1 a, t2 b)
{
    return (a + b) / 2.0;
}

int main()
{
    cout << "average : " << average(10, 10) << endl;
    cout << "average : " << average(10, 11) << endl;
    cout << "average : " << average(10.5, 11) << endl;
    display(12);
    display(12.89f);
    display('H');
    display("home");
    return 0;
}