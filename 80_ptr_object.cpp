// pointer to object
#include <iostream>
using namespace std;
class emp
{
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
    emp e1, *ptr;
    ptr = &e1;
    (*ptr).setdata(101, 12000);
    // e1.display();
    (*ptr).display();
    return 0;
}