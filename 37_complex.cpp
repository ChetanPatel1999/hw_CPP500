#include <iostream>
using namespace std;
class complex
{
    int real;
    int image;

public:
    void setComplex(int a, int b)
    {
        real = a;
        image = b;
    }
    void getComplex()
    {
        cout << "complex number : " << real << " + " << image << "i" << endl;
    }
    static complex sum(complex o1, complex o2)
    {
        complex res;
        res.real = o1.real + o2.real;
        res.image = o1.image + o2.image;
        return res;
    }
};
int main()
{
    complex c1, c2, c3;
    c1.setComplex(5, 2);
    c2.setComplex(7, 3);
    c1.getComplex();
    c2.getComplex();

    c3 = complex::sum(c1, c2);

    c3.getComplex();
    return 0;
}