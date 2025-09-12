// dyanamic object in cpp
#include <iostream>
using namespace std;
class emp
{
public:
    int id;
    float sal;

public:
    void setdata(int a, float b)
    {
        id = a;
        sal = b;
    }
    void display()
    {
        cout << "emp info : " << endl;
        cout << "emp id : " << id << endl;
        cout << "emp sal : " << sal << endl;
    }
};
int main()
{
    emp *ptr = new emp;
    ptr->setdata(101, 12000);
    ptr->display();
    ptr->id = 102;
    ptr->display();
    delete ptr;

    return 0;
}