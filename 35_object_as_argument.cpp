// how to pass object as method argument
#include <iostream>
using namespace std;
class number
{
    int num1;
    int num2;

public:
    void setNumber(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    void getNumber()
    {
        cout << "numbers value : " << endl;
        cout << "num1 : " << num1 << endl;
        cout << "num2 : " << num2 << endl;
    }
    void sum()
    {
        int sum = num1 + num2;
        cout << "sum = " << sum << endl;
    }
    void sum_differnt_object(number obj)
    {
        int sum1, sum2;
        sum1 = num1 + obj.num1;
        sum2 = num2 + obj.num2;
        cout << "sum1 = " << sum1 << endl;
        cout << "sum2 = " << sum2 << endl;
    }
    static void sum_differnt_object_static(number obj1, number obj2)
    {
        int sum1, sum2;
        sum1 = obj1.num1 + obj2.num1;
        sum2 = obj1.num2 + obj2.num2;
        cout << "sum1 = " << sum1 << endl;
        cout << "sum2 = " << sum2 << endl;
    }
};
int main()
{
    number n1, n2;
    n1.setNumber(12, 5);
    n2.setNumber(6, 10);
    n1.getNumber();
    n2.getNumber();
    n1.sum();
    n2.sum();
    n1.sum_differnt_object(n2);

    number::sum_differnt_object_static(n1, n2);
    return 0;
}