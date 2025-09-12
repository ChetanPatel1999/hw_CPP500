// dyanamic object in cpp
#include <iostream>
using namespace std;
class emp
{
    int id;
    float sal;

public:
    emp(int a, float b)
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
    emp *ptr = new emp(101, 12000);
    ptr->display();
    delete ptr;

    return 0;
}