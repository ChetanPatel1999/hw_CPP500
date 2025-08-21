// by default class data is private
#include <iostream>
using namespace std;
class bottle
{
    string color;   // data member
    int price;      // data member
    float capacity; // data member

public:
    bottle(string s1, int a, float b) // method
    {
        color = s1;
        price = a;
        capacity = b;
    }
    void getBottle()
    {
        cout << "bottle info " << endl;
        cout << "bottle color : " << color << endl;
        cout << "bottle price : " << price << endl;
        cout << "bottle capacity : " << capacity << endl;
        cout << "----------------------------------" << endl;
    }
};
int main()
{
    bottle b1("red", 20, 1.5);
    bottle b2("blue", 38, 2);
    bottle b3("white", 50, 5);
    b1.getBottle();
    b2.getBottle();
    b3.getBottle();
    return 0;
}