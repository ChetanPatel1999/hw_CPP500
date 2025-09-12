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
    emp *ptr = new emp[3];
    emp *temp = ptr;
    int i;
    ptr->setdata(101, 1200);
    ptr++;
    ptr->setdata(102, 5000);
    ptr++;
    ptr->setdata(103, 6000);

    ptr = temp;
    for (i = 0; i < 3; i++)
    {
        ptr->display();
        ptr++;
    }

    return 0;
}