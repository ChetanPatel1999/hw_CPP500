#include <iostream>
using namespace std;
class emp
{
    int id;
    float sallary;

public:
    void setemp(int a, float b) // setter method
    {
        id = a;
        sallary = b;
    }
    void getemp() // getter method
    {
        cout << "emp info : " << endl;
        cout << "emp id : " << id << endl;
        cout << "emp sallary : " << sallary << endl;
        cout << "-----------------------" << endl;
    }
};
int main()
{
    emp e1, e2, e3;
    e1.setemp(101, 50000);
    e2.setemp(102, 20000);
    e1.getemp();
    e2.getemp();
    return 0;
}