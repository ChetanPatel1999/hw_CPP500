#include <iostream>
using namespace std;
template <class T>
class complex
{
    T real;
    T image;

public:
    complex() {}
    complex(T a, T b)
    {
        real = a;
        image = b;
    }
    void getComplex()
    {
        cout << "complex number : " << real << " + " << image << "i" << endl;
    }
    complex operator+(complex obj)
    {
        complex res;
        res.real = real + obj.real;
        res.image = image + obj.image;
        return res;
    }
    complex operator-(complex obj)
    {
        complex res;
        res.real = real - obj.real;
        res.image = image - obj.image;
        return res;
    }
};
int main()
{
    complex<int> c1(12, 5), c2(8, 3), c3;
    c1.getComplex();
    c2.getComplex();
    c3 = c1 + c2;
    c3.getComplex();
    cout << "------------------------------" << endl;
    complex<float> c4(2.3, 4.5), c5(6.2, 7.5), c6;
    c4.getComplex();
    c5.getComplex();
    c6 = c4 + c5;
    c6.getComplex();
    return 0;
}