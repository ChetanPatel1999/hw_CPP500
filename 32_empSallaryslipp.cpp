// generate employ sallary slip
#include <iostream>
using namespace std;
class Employ
{
    string name;
    int id;
    float sallary;

public:
    void setEmploy(string s, int i, float sal)
    {
        name = s;
        id = i;
        sallary = sal;
    }
    void getEmploy()
    {
        cout << "Employ info :- " << endl;
        cout << "name : " << name << endl;
        cout << "id : " << id << endl;
        cout << "sallary : " << sallary << " per/month" << endl;
    }
    void getSallarySlip(int day)
    {
        getEmploy();
        cout << "total day working : " << day << " days" << endl;
        float perday = sallary / 30;
        cout << "total payable sallary : " << (perday * day) << " rs" << endl;
        cout << "--------------------------------------------" << endl;
    }
};
int main()
{
    Employ e1, e2, e3;
    e1.setEmploy("harsh varma", 1234, 50000);
    e1.getSallarySlip(10);
    e2.setEmploy("yashraj", 5678, 60000);
    e2.getSallarySlip(12);
    return 0;
}