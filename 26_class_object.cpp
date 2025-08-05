// by default class data is private
#include <iostream>
using namespace std;
class bottle
{
public:
    string color;
    int price;
    float capacity;
};
int main()
{
    bottle b1, b2, b3;
    b1.color = "red";
    b1.price = 20;
    b1.capacity = 1.5;

    b2.color = "blue";
    b2.price = 38;
    b2.capacity = 2;

    cout << "bottle info " << endl;
    cout << "bottle color : " << b1.color << endl;
    cout << "bottle price : " << b1.price << endl;
    cout << "bottle capacity : " << b1.capacity << endl;

    cout << "bottle info " << endl;
    cout << "bottle color : " << b2.color << endl;
    cout << "bottle price : " << b2.price << endl;
    cout << "bottle capacity : " << b2.capacity << endl;
    return 0;
}